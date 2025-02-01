#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
class File
{
private:
    fstream myfile;

public:
    string line, word;
    string filename;
    int cnum = 0;
    ;
    vector<string> columnnames;
    File()
    {
        cout << "Please enter your file name: ";
        cin >> filename;
        myfile.open(filename, ios::in);
        getline(myfile, line);
        stringstream obj(line);
        while (getline(obj, word, ','))
        {
            columnnames.push_back(word);
            cnum++;
        }
    }
    void showdata()
    {
        while (getline(myfile, line))
        {
            printline();
        }
    }
    void passfail()
    {
        ofstream passfile("passed.txt");
        ofstream failfile("failed.txt");
        int pvalue;
        char ch;
        char repeat;
        myfile.clear();
        myfile.seekg(0, ios::beg);
        getline(myfile, line);
        cout << "Enter passing value : " << endl;
        cin >> pvalue;
        while (getline(myfile, line))
        {
            stringstream obj(line);
            int check;
            for (int i = 0; i < columnnames.size(); i++)
            {
                getline(obj, word, ',');
                if (i == cnum - 1)
                {
                    check = stof(word);
                    if (check >= pvalue)
                    {
                        passfile << line << endl;
                    }
                    else
                    {
                        failfile << line << endl;
                    }
                }
            }
        }
        passfile.close();
        failfile.close();
    }
    ~File()
    {
        myfile.close();
    }

private:
    void printline()
    {
        stringstream obj2(line);
        for (int i = 0; i < columnnames.size(); i++)
        {
            getline(obj2, word, ',');
            cout << columnnames[i] << " : " << word << endl;
        }
        cout << endl
             << " ***************************************************************************** " << endl;
    }
};
int main()
{
    File object;
    // object.showdata();
    object.passfail();

    return 0;
}