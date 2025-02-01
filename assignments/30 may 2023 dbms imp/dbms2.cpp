#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;
class Data
{
public:
    vector<string> rowdata;
};
class Read
{
public:
    int columncount = 1;
    int readline()
    {

        ifstream readfile("student.txt");
        string word, line;
        getline(readfile, line);
        int counter = 0;
        stringstream obj(line);
        while (getline(obj, word, ','))
        {
            cout << "Column " << columncount << ": " << word << endl;
            columncount++;
            counter++;
        }

        cout << "Number of columns is: " << counter << endl;
        readfile.close();
        return counter;
    }
    int countcol()
    {

        string line, word = "";
        int counter = 0;
        ifstream file("student.txt");
        getline(file, line);
        stringstream obj(line);
        while (getline(obj, word, ','))
        {
            counter++;
        }
        file.close();
        cout << counter;
        return counter;
    }
    void readfile()
    {
        int columnnum = countcol();
        system("cls");
        vector<string> columnnames;
        string line, word = "";
        int counter = 0;
        ifstream file("student.txt");
        getline(file, line);
        stringstream obj(line);
        while (getline(obj, word, ','))
        {
            columnnames.push_back(word);
            counter++;
        }
        file.close();
    }
    int countline()
    {
        ifstream file1("student.txt");
        string line, word;
        int counter = 0, count2 = 0;
        while (getline(file1, line))
        {
            counter++;
        }
        counter--;
        file1.close();
        return counter;
    }
    void datadisplay()
    {
        int columnn = countcol();
        system("cls");
        ifstream file2("student.txt");
        string line, word;
        int counter = 0, count2 = 0;
        counter = countline();
        cout << "Total no of entries: " << counter << endl;
        cout << "Total no of column: " << columnn << endl;
        fflush(stdout);
        vector<Data> data1;
        int count3 = 0, count4 = 0;
        getline(file2, line);
        vector<string> columnme;
        stringstream obj(line);
        while (getline(obj, word, ','))
        {
            columnme.push_back(word);
            count2++;
        }

        while (getline(file2, line))
        {
            Data data2;
            count3 = 0;
            stringstream obj(line);
            while (getline(obj, word, ','))
            {
                data2.rowdata.push_back(word);
                count3++;
            }
            data1.push_back(data2);
            count4++;
        }
        file2.close();
        fflush(stdout);
        cout << "Counter: " << count4 << endl;
        // for (int i = 0; i < columnn; i++)
        // {
        //    for (int j = 0; j<counter; j++)
        //    {
        //   cout<<data[i][j]<<endl;
        //    }
        //    }
        readline();
        int n1, n2;
        cout << "Enter column no: ";
        cin >> n1;
        cout << "Enter data entry no: ";
        cin >> n2;
        cout << "Entry no " << n2 << " of " << columnme[n1 - 1] << " is " << data1[n2 - 1].rowdata[n1 - 1];
    }
};
int main()
{
    Read obj;
    // obj.readline();
    // obj.readfile();
    obj.datadisplay();
    // obj.countcol();

    return 0;
}