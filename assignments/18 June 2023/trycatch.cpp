#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;
int main()
{
    string filename;
    cout << "Enter file name please: ";
    cin >> filename;
    fstream file(filename, ios::in);
    try
    {
        if (!file)
        {
            throw 10;
        }
        if (file)
        {
            throw 'c';
        }
    }
    catch (int x)
    {
        file.close();
        cout << "The filename you entered does not exist. Would you like to create a file with such name?[y/n]";
        char c;
        cin >> c;
        if (c == 'y' || c == 'Y')
        {
            fstream file2(filename, ios::app);
            string fileword;
            cout << "Enter data: ";
            cin.ignore();
            getline(cin, fileword);
            file2 << fileword;
            file2.close();
        }
    }
    catch (char x)
    {
        string line;
        cout << "Reading file: " << endl
             << endl
             << endl;
        while (getline(file, line))
        {
            cout << line << endl;
        }
        file.close();
    }
    return 0;
}