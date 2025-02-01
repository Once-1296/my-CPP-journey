#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class student
{
private:
    string fullname, filename;
    int age, rollno;
    float marks;

public:
    float arrmarks[100];
    int arrrollno[100];
    int arrage[100];
    string arrnames[100];
    // Constructor
    student(string fin);
    // Taking new data
    void inputdetails();
    // Writing to file
    void writefile();
    // Showing available data
    void showinfo(int studentnum);
    // reading file
    void readfile();
};
student :: student(string fin)
{
    filename = fin;
}
void student ::inputdetails()
{
    system("cls");
    char c;
    cout << "Enter full name: ";
    cin.ignore();
    getline(cin, fullname);
    fflush(stdout);
    cout << "Enter age, roll no and marks: ";
    cin >> age >> rollno >> marks;
    writefile();
    cout << "Do you want to continue?[y/n] ";
    cin >> c;
    if (c == 'y' || c == 'Y')
    {
        inputdetails();
    }
}
void student ::writefile()
{
    fstream file(filename + ".txt", ios::app);
    file << fullname << "," << age << "," << rollno << "," << marks << "," << endl;
    file.close();
}
void student ::showinfo(int studentnum)
{
    char c = 'n';
    system("cls");
    cout << "Displaying details of student: " << studentnum << endl;
    cout << "Name: " << arrnames[studentnum] << endl;
    cout << "Age: " << arrage[studentnum] << endl;
    cout << "Roll no: " << arrrollno[studentnum] << endl;
    cout << "Marks: " << arrmarks[studentnum] << endl;
    cout << "Do you want to continue?[y/n] " << endl;
    cin >> c;
    if (c == 'y' || c == 'Y')
    {
        cout << "Enter student index no: " << endl;
        cin >> studentnum;
        showinfo(studentnum);
    }
}
void student ::readfile()
{
    system("cls");
    cout << "Displaying student details: " << endl
         << endl
         << endl;
    ifstream file(filename + ".txt");
    string word,line;
    int a = 1;
    while (getline(file,line,'\n'))
    {
        int x = 0;
        while (getline(file, word, ','))
        {
            if (x == 0)
            {
                cout << "Details of student " << a << endl;
                cout << "Name: " << word << endl;
                arrnames[a - 1] = word;
                fflush(stdout);
            }
            if (x == 1)
            {
                cout << "Age: " << word << endl;
                arrage[a - 1] = stoi(word);
            }
            if (x == 2)
            {
                cout << "Roll no: " << word << endl;
                arrrollno[a - 1] = stoi(word);
            }
            if (x == 3)
            {
                cout << "Marks: " << word << endl;
                arrmarks[a - 1] = stof(word);
                break;
            }
            x++;
        }
        a++;
    }
    file.close();
    int studentnum;
    cout << "Enter student index no: " << endl;
    cin >> studentnum;
    showinfo(studentnum);
}
int main()
{
    string filename;
    int num;
    cout << "Enter file name: " << endl;
    cin >> filename;
    student object(filename);
    cout << "Enter 1 for entering new details and 2 for displaying student information: ";
    cin >> num;
    switch (num)
    {
    case 1:
        object.inputdetails();
        break;
    case 2:
        object.readfile();
        break;
    }
    return 0;
}