#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include<sstream>
using namespace std;
class Data4
{
    public:
    vector<string> data45;
};
class Data
{
public:
    vector<string> rowData;
};
class Data3
{
    public:
    vector <string> data34;
};
class Data2
{
public:
    string fn;
    void readfile(string filename)
    {
        fn = filename;
        ifstream inputFile(fn);
        vector<Data> dataVec;
        // Read data from file
        string line, word;
        getline(inputFile, line);
        int counter = 0;
        stringstream obj(line);
        while (getline(obj, word, ','))
        {
            cout << "Column " << counter + 1 << ": " << word << endl;
            counter++;
        }
        cout << "Number of columns is: " << counter << endl;
        vector<string> columnme;
        inputFile.seekg(0, ios::beg);
        getline(inputFile, line);
        stringstream obj2(line);
        counter = 0;
        while (getline(obj2, word, ','))
        {
            columnme.push_back(word);
            counter++;
        }
        while (getline(inputFile, line))
        {
            Data data;
            // Parse line into columns
            stringstream obj(line);
            while (getline(obj, word, ','))
            {
                data.rowData.push_back(word);
            }
            dataVec.push_back(data);
        }
        int i = 1, j = 0;
        // Print data
        // for (auto &data : dataVec)
        // {
        //     cout << "Displaying data of student " << i << endl;
        //     j = 0;
        //     for (auto &item : data.rowData)
        //     {
        //         cout << "Column " << j + 1 << " : " << columnme[j] << " : " << item << endl;
        //         j++;
        //     }
        //     i++;
        //     cout << endl
        //          << endl
        //          << "*******************************************************************************" << endl
        //          << endl;
        // }
        string passw;
        cout << "Enter password: ";
        cin >> passw;
        int rentry = check_pass(passw, fn);
        if (!check_pass(passw, fn))
        {
            cout << "You entered wrong password try again. " << endl;
        }
        if (check_pass(passw, fn))
        {
            cout << "Hello data entry: " << rentry << endl;
            for (int i = 0; i < counter; i++)
            {
                cout << "Column " << i + 1 << columnme[i] << " : " << dataVec[rentry - 1].rowData[i] << endl;
            }
            cout << "Would you like to: " << endl
                 << "1. change data" << endl
                 << "2.delete data" << endl;
            int c;
            cin >> c;
            switch (c)
            {
            case 1:
                int cn;
                cout << "Enter column no: " << endl;
                cin >> cn;
                while (cn == counter)
                {
                    cout << "Current data: " << dataVec[rentry - 1].rowData[cn - 1] << endl;
                    cout << "Enter new data: " << endl;
                    string temp_pass;
                    cin >> temp_pass;
                    if (check_pass(temp_pass, fn))
                    {
                        char ch;
                        cout << "Password is taken,do you want to try again? [y/n]" << endl;
                        cin >> ch;
                        if (ch == 'y' || ch == 'Y')
                        {
                        }
                        else
                        {
                            goto label;
                        }
                    }
                    else
                    {
                        dataVec[rentry - 1].rowData[cn - 1] = temp_pass;
                        int cc = countcol(fn);
                        int rr = countline(fn);
                        ofstream filewrite(fn);
                        for (int i = 0; i < cc; i++)
                        {
                            if (i == cc - 1)
                            {
                                filewrite << columnme[i] << endl;
                                break;
                            }
                            filewrite << columnme[i] << ",";
                        }
                        for (int i = 0; i < rr; i++)
                        {
                            for (int j = 0; j < cc; j++)
                            {
                                if (j == cc - 1)
                                {
                                    filewrite << dataVec[i].rowData[j] << endl;
                                    break;
                                }
                                filewrite << dataVec[i].rowData[j] << ",";
                            }
                        }
                        filewrite.close();
                        break;
                    }
                }
                if (cn != counter)
                {
                    cout << "Current data: " << dataVec[rentry - 1].rowData[cn - 1] << endl;
                    cout << "Enter new data: " << endl;
                    cin >> dataVec[rentry - 1].rowData[cn - 1];
                    int cc = countcol(fn);
                    int rr = countline(fn);
                    ofstream filewrite(fn);
                    for (int i = 0; i < cc; i++)
                    {
                        if (i == cc - 1)
                        {
                            filewrite << columnme[i] << endl;
                            break;
                        }
                        filewrite << columnme[i] << ",";
                    }
                    for (int i = 0; i < rr; i++)
                    {
                        for (int j = 0; j < cc; j++)
                        {
                            if (j == cc - 1)
                            {
                                filewrite << dataVec[i].rowData[j] << endl;
                                break;
                            }
                            filewrite << dataVec[i].rowData[j] << ",";
                        }
                    }
                    filewrite.close();
                }
                break;
            case 2:
                char ch;
                cout << "Are you sure you want to delete data: [y/n]";
                cin >> ch;
                if (ch == 'y' || ch == 'Y')
                {
                    dataVec.erase(dataVec.begin() + (rentry - 1));
                    int cc = countcol(fn);
                    int rr = countline(fn);
                    fstream filewrite(fn, ios::out);
                    for (int i = 0; i < cc; i++)
                    {
                        if (i == cc - 1)
                        {
                            filewrite << columnme[i] << endl;
                            break;
                        }
                        filewrite << columnme[i] << ",";
                    }
                    for (int i = 0; i < rr - 1; i++)
                    {
                        for (int j = 0; j < cc; j++)
                        {
                            if (j == cc - 1)
                            {
                                filewrite << dataVec[i].rowData[j] << endl;
                                break;
                            }
                            filewrite << dataVec[i].rowData[j] << ",";
                        }
                    }
                    filewrite.close();
                    break;
                }
            }
        }

    label:;
    }

    int countcol(string fn)
    {

        string line, word = "";
        int counter = 0;
        ifstream file(fn);
        getline(file, line);
        stringstream obj(line);
        while (getline(obj, word, ','))
        {
            counter++;
        }
        file.close();
        return counter;
    }
    int countline(string fn)
    {
        ifstream file1(fn);
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
    int check_pass(string pass, string fn)
    {
        int cnum = countcol(fn);
        int rnum = countline(fn);
        vector <Data3>dvec1;
        string line, word;
        int countc = 0, countr = 0;
        ifstream filec(fn);
        getline(filec, line);
        while (getline(filec, line))
        {
            Data3 dv1;
            stringstream obj(line);
            countc = 0;
            while (getline(obj, word, ','))
            {
                
                dv1.data34.push_back(word);
                countc++;
            }
            dvec1.push_back(dv1);
            countr++;
        }
        filec.close();
        for (int i = 0; i < rnum; i++)
        {
            if (dvec1[i].data34[cnum-1]== pass)
            {
                
                return i + 1;
            }
        }
        return 0;
    }
    void writefile(string fn)
    {
        int cnum = countcol(fn);
        int rnum = countline(fn);
        int randnum;
        srand(time(0));
        vector<Data4> dvec2;
        string line, word;
       vector <string> columnnm;
        int countc = 0, countr = 0;
        ifstream filec(fn);
        getline(filec, line);
        stringstream obj(line);
        while (getline(obj, word, ','))
        {
            columnnm.push_back(word);
        }
        fflush(stdout);
        fflush(stdout);
        while (getline(filec, line))
        {
            Data4 dv2;
            countc = 0;
            stringstream obj(line);
            while (getline(obj, word, ','))
            {
                dv2.data45.push_back(word);
                countc++;
            }
            dvec2.push_back(dv2);
            countr++;
        }
        filec.close();
        string passw;
        bool check_p = false;
        cout << "Enter password: ";
        cin >> passw;
        if (check_pass(passw, fn))
        {
            cout << "This password is already taken. Try again. ";
        }
        else
        {
            string temp;
            fstream filew(fn, ios::app);
            vector <string> enterdata;
            for (int i = 0; i < cnum; i++)
            {
                randnum = 1 + rand() % rnum - 1;
                if (i == cnum - 1)
                {
                    filew << passw << endl;
                    continue;
                }
                cout << "Enter data for field " << i + 1 << " " << columnnm[i] << " example data " << dvec2[randnum].data45[i] << endl;
                cin >> temp;
                enterdata.push_back(temp);
                filew << enterdata[i] << ",";
            }
            filew.close();
        }
    }
};
int main()
{
    int x;
    string fn;
    Data2 obj;
    system("cls");
    cout << "--------------------------------Welcome to student database page------------------------------------" << endl;
    cout << "\n\n\n";
    cout << "Enter file name: " << endl;
    cin >> fn;
    cout << "Enter 1 for new entry and 2 for displaying owned account information: ";
    cin >> x;
    switch (x)
    {
    case 1:
        system("cls");
        obj.writefile(fn);
        break;
    case 2:
        system("cls");
        obj.readfile(fn);
        break;
    }
    return 0;
}