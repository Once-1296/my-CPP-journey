#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class student
{
public:
    float marks[100];
    int rollno[100];
    int age[100];
    string names[100];
    void showinfo(int studentnum);
};
    void student :: showinfo(int studentnum)
    {
        char c = 'n';
        system("cls");
        cout << "Displaying details of student: " << studentnum << endl;
        cout << "Name: " << names[studentnum] << endl;
        cout << "Age: " << age[studentnum] << endl;
        cout << "Roll no: " << rollno[studentnum] << endl;
        cout << "Marks: " << marks[studentnum] << endl;
        cout << "Do you want to continue?[y/n] " << endl;
        cin >> c;
        if (c == 'y' || c == 'Y')
        {
            cout << "Enter student index no: " << endl;
            cin >> studentnum;
            showinfo(studentnum);
        }
    }
int main()
{
    system("cls");
    cout << "Displaying student details: " << endl
         << endl
         << endl;
    student object;
    ifstream file("student.txt");
    string word;
    int a = 1;
    while (!file.eof())
    {
        int x = 0;
        while (getline(file, word, ','))
        {
            if (x == 0)
            {
                cout << "Details of student " << a << endl;
                cout << "Name: " << word << endl;
               object.names[a - 1] = word;
               fflush(stdout);
            }
            if (x == 1)
            {
                cout << "Age: " << word << endl;
                object.age[a - 1] = stoi(word);
            }
            if (x == 2)
            {
                cout << "Roll no: " << word << endl;
                object.rollno[a - 1] = stoi(word);
            }
            if (x == 3)
            {
                cout << "Marks: " << word << endl;
                object.marks[a - 1] = stof(word);
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
    object.showinfo(studentnum);
    return 0;
}