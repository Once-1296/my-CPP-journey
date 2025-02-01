#include <iostream>
#include <fstream>
#include<string>
using namespace std;
class base
{
protected:
    fstream fileopenwrite();
    ifstream fileopenread();
};
class readclass : public base
{
public:
    string passwords[100];
    string usernames[100];

public:
    int readfile();
    void showinfo();
};
class registration : public base, public readclass
{
private:
    string username, password;

public:
    void writefile(string uname, string pass);
};
fstream base ::fileopenwrite()
{
    fstream file("data.txt", ios::app);
    return file;
}
ifstream base ::fileopenread()
{
    ifstream file("data.txt");
    return file;
}
int readclass ::readfile()
{
    string passw;
    fileopenread();
    ifstream file = fileopenread();
    int a = 0;
    int x = 0;
    string word,line;
       do
        {
            x = 0;
            while (getline(file, word, ','))
            {
                if (x == 0)
                {
                    usernames[a] = word;
                }
                if (x == 1)
                {
                    passwords[a] = word;
                    break;
                }
                x++;
            }
            a++;
        } while (getline(file,line,'\n'));
        file.close();
        return a;
    
}
void readclass :: showinfo()
{
    string passw;
    bool condition = false;
    cout << "Enter password: " << endl;
    cin>>passw;
    int a = readfile();
    cout<<a<<endl;
    for (int i = 0; i < a; i++)
    {
        if (passwords[i] == passw)
        {
            cout << "Hello " << usernames[i] << endl;
            condition = true;
        }
    }
    if (!condition)
    {
        cout << "Wrong password.";
    }
}
void registration ::writefile(string uname, string pass)
{
    readclass::fileopenwrite();
    fstream file = readclass::fileopenwrite();
    username = uname;
    password = pass;
    readfile();
    int a = readfile();
    for (int i = 0; i < a; i++)
    {
        if (usernames[i] == username || passwords[i] == password)
        {
            cout << "The username or password is already taken. Try again. " << endl;
        }
        else
        {
            file << username << "," << password<<","<< endl;
        }
    }
    file.close();
}
int main()
{
    string username, password;
    system("cls");
    int c;
    cout << "Enter 1 for registration and 2 for login: " << endl;
    cin >> c;
    registration object;
    switch (c)
    {
    case 1:
        cout << "Enter username: ";
        cin.ignore();
        getline(cin, username);
        cin.ignore();
        cout << "Enter password: ";
        getline(cin, password);
        object.writefile(username, password);
        break;
    case 2:
        readclass object1;
        object1.readfile();
        object1.showinfo();
        break;
    }
    return 0;
}