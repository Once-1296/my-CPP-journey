#include <iostream>
#include <fstream>
#include<string>
using namespace std;
void writefile(string fullname, int age, int rollno, float marks)
{
    fstream file("student.txt", ios::app);
    file << fullname << "," << age << "," << rollno << "," << marks<<"," << endl;
    file.close();
}
int main()
{    char c;
do
    {
        string fullname;
        int age;
        int rollno;
        float marks;
        system("cls");
        cout << "Enter full name: ";
        cin.ignore();
        getline(cin,fullname);
        fflush(stdout);
        cout << "Enter age, roll no and marks: ";
        cin >> age >> rollno >> marks;
        writefile(fullname, age, rollno, marks);
        cout << "Do you want to continue?[y/n] ";
        cin >> c;
        } while (c == 'Y' || c == 'y');
    return 0;
}