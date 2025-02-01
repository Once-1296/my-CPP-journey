#include <iostream>
#include <fstream>
#include<sstream>
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
        }
    }
    void showdata()
    {
        while (getline(myfile, line))
        {
            printline();
        }
    }
    void searchdata()
    {
        string filtercolumn, searchvalue;
        int lvalue, uvalue;
        bool checkcolumn = false,ismatched = false;;
        char ch;
        int columnind = -1;
        cout << "Enter column name: ";
        cin >> filtercolumn;
        cout << "Do you want in range or specific value? [r/s]";
        cin >> ch;
        switch (ch)
        {
        case 'r':
        char repeat;
        do{
            myfile.clear();
            myfile.seekg(0, ios::beg);
            getline(myfile, line);
            for (int i = 0; i < columnnames.size(); i++)
            {
                if (columnnames[i] == filtercolumn)
                {
                    columnind = i;
                    checkcolumn = true;
                    break;
                }
            }
            if(!checkcolumn){
                cout<<"The column you entered doesn't exist. Try again. ";
                break;
            }
            cout << "Enter lower range: ";
            cin >> lvalue;
            cout << "Enter upper range: ";
            cin >> uvalue;
            cout<<"Students with values ranging from "<<lvalue<<" to "<<uvalue<<" in "<<columnnames[columnind]<<" are as follows: ";
            while (getline(myfile, line))
            {
                stringstream obj(line);
                float check;
                for (int i = 0; i < columnnames.size(); i++)
                {
                    getline(obj, word, ',');
                    if (i == columnind)
                    {
                        check = stof(word);
                        if (check <= uvalue && check > lvalue)
                        {
                            ismatched = true;
                            printline();
                        }
                    }
                }
            }
            if (!ismatched)
            {
               cout<<"No such entry could be found. ";
            }
            cout<<"Do you want to continue? [y/n]"<<endl;
            cin>>repeat;
        }while(repeat == 'y'||repeat =='Y');
            break;
        case 's':
            myfile.clear();
            myfile.seekg(0, ios::beg);
            getline(myfile, line);
            for (int i = 0; i < columnnames.size(); i++)
            {
                if (columnnames[i] == filtercolumn)
                {
                    columnind = i;
                    checkcolumn = true;
                    break;
                }
            }
             if(!checkcolumn){
                cout<<"The column you entered doesn't exist. Try again. ";
                break;
            }
            cout << "Enter required value: ";
            cin >> searchvalue;
            while (getline(myfile, line))
            {
                stringstream obj(line);
                for (int i = 0; i < columnnames.size(); i++)
                {
                    getline(obj, word, ',');
                    if (i == columnind && word == searchvalue)
                    {
                        cout << "Record is matched. " << endl;
                        printline();
                        ismatched = true;
                        break;
                    }
                }
            }
            if (!ismatched)
            {
               cout<<"No such entry could be found. ";
            }
            break;
        }
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
    object.searchdata();

    return 0;
}