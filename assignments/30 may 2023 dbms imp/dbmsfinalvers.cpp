#include <iostream>
#include <fstream>
#include <string>
#include<vector>
#include<sstream>
using namespace std;
class Data
{
    public:
    vector<string> rowdata;
};
class Data2
{
    public:
    vector<string> rowdata2;
};
class Data3
{
    public:
    vector<string>rowdata3;
};
class Read
{
public:
    int columncount = 1;
    int readline(string fn,string dt)
    {

        ifstream readfile( fn + "." + dt);
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
    int countcol(string fn,string dt)
    {

        string line, word = "";
        int counter = 0;
        ifstream file(fn + "." + dt);
        getline(file, line);
        stringstream obj(line);
        while (getline(obj, word, ','))
        {
            counter++;
        }
        file.close();
        return counter;
    }
    int countline(string fn,string dt)
    {
        ifstream file1(fn + "." + dt);
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
    int check_pass(string pass,string fn,string dt)
    {
        int cnum = countcol(fn,dt);
        int rnum = countline(fn,dt);
        vector<Data>database;
        string line, word;
        int countc = 0, countr = 0;
        ifstream filec(fn + "." + dt);
        getline(filec, line);
        while (getline(filec, line))
        {
            Data data1;
            stringstream obj(line);
            countc = 0;
            while (getline(obj, word, ','))
            {
                data1.rowdata.push_back(word);
                countc++;
            }
            database.push_back(data1);
            countr++;
        }
        filec.close();
        for (int i = 0; i < rnum; i++)
        {
            if (database[i].rowdata[cnum - 1] == pass)
            {
                return 1;
            }
        }
        return 0;
    }
    void datadisplay(string fn,string dt)
    {
        int columnn = countcol(fn,dt);
        system("cls");
        ifstream file2(fn + "." + dt);
        string line, word;
        int counter = 0, count2 = 0;
        counter = countline(fn,dt);
        cout << "Total no of entries: " << counter << endl;
        cout << "Total no of column: " << columnn << endl;
        fflush(stdout);
        vector<Data2> data;
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
            Data2 data2;
            count3 = 0;
            stringstream obj(line);
            while (getline(obj, word, ','))
            {
                data2.rowdata2.push_back(word);
                count3++;
            }
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
        // readline();
        int n1, n2;
        string password;
        char check;
        cout << "Enter password: " << endl;
        cin >> password;
        bool check_password = false;
        for (int i = 0; i < counter; i++)
        {
            if (data[i].rowdata2[columnn - 1] == password)
            {
                check_password = true;
                n1 = i;
                break;
            }
        }

        while (check_password)
        {
            system("cls");
            cout << "Your data is as follows: " << endl;
            for (int i = 0; i < columnn; i++)
            {
                cout << "Column " << i + 1 << " " << columnme[i] << " : " << data[n1].rowdata2[i] << endl;
            }
            cout << "Would you like to change your data?  [y/n]" << endl;
            cin >> check;
            if (check == 'y' || check == 'Y')
            {
                cout << "Enter column no: " << endl;
                cin >> n2;
                while (n2 == columnn)
                {
                    cout << "Current data: " << data[n1].rowdata2[n2 - 1] << endl;
                    cout << "Enter new data: " << endl;
                    string temp_pass;
                    cin >> temp_pass;
                    if (check_pass(temp_pass,fn,dt))
                    {   char ch;
                        cout << "Password is taken,do you want to try again? [y/n]"<<endl;
                        cin>>ch;
                        if (ch=='y'||ch=='Y')
                        {
                        }
                        else{
                           goto label;
                        }
                    }
                    else
                    {
                    data[n1].rowdata2[n2-1] = temp_pass;
                    fstream filewrite(fn + "." + dt, ios::out);
                    for (int i = 0; i < columnn; i++)
                    {
                        if (i == columnn - 1)
                        {
                            filewrite << columnme[i] << endl;
                            break;
                        }
                        filewrite << columnme[i] << ",";
                    }
                    for (int i = 0; i < counter; i++)
                    {
                        for (int j = 0; j < columnn; j++)
                        {
                            if (j == columnn - 1)
                            {
                                filewrite << data[i].rowdata2[j] << endl;
                                break;
                            }
                            filewrite << data[i].rowdata2[j] << ",";
                        
                        }
                    }
                    filewrite.close();
                    break;
                    }
                }
                if (n2 != columnn)
                {
                    cout << "Current data: " << data[n1].rowdata2[n2 - 1] << endl;
                    cout << "Enter new data: " << endl;
                    cin >> data[n1].rowdata2[n2 - 1];
                    fstream filewrite(fn + "." + dt, ios::out);
                    for (int i = 0; i < columnn; i++)
                    {
                      if (i == columnn - 1)
                        {
                            filewrite << columnme[i] << endl;
                            break;
                        }
                        filewrite << columnme[i] << ",";
                    }
                    for (int i = 0; i < counter; i++)
                    {
                        for (int j = 0; j < columnn; j++)
                        {
                           if (j == columnn - 1)
                            {
                                filewrite << data[i].rowdata2[j] << endl;
                                break;
                            }
                            filewrite << data[i].rowdata2[j] << ",";
                        }
                    }
                    filewrite.close();
                }
            }
            else
            {
                break;
            }
        }
        if (!check_password)
        {
            cout << "You entered wrong password try again. " << endl;
        }
        label:
        ;
    }

    void writefile(string fn,string dt)
    {
        int cnum = countcol(fn,dt);
        int rnum = countline(fn,dt);
        int count1 = 0;
        int randnum;
        srand(time(0));
        vector<Data3>database;
        string line, word;
        vector<string>columnnm;
        int countc = 0, countr = 0;
        ifstream filec(fn + "." + dt);
        getline(filec, line);
        stringstream obj(line);
        while (getline(obj, word, ','))
        {
            columnnm.push_back(word);
            count1++;
        }
        fflush(stdout);
        fflush(stdout);
        while (getline(filec, line))
        {
            Data3 data3;
            countc = 0;
            stringstream obj(line);
            while (getline(obj, word, ','))
            {
                data3.rowdata3.push_back(word);
                countc++;
            }
            database.push_back(data3);
            countr++;
        }
        filec.close();
        string passw;
        bool check_p = false;
        cout << "Enter password: ";
        cin >> passw;
        if (check_pass(passw,fn,dt))
        {
            cout << "This password is already taken. Try again. ";
        }
        else
        {
            fstream filew(fn + "." + dt, ios::app);
            vector<string> enterdata;
            string temp;
            for (int i = 0; i < cnum; i++)
            {
                randnum = 1 + rand() % rnum - 1;
                if (i == cnum - 1)
                {
                    filew << passw << endl;
                    continue;
                }
                cout << "Enter data for field " << i + 1 << " " << columnnm[i] << " example data " << database[randnum].rowdata3[i] << endl;
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
    string fn,dt;
    Read obj;
    system("cls");
    cout << "--------------------------------Welcome to student database page------------------------------------" << endl;
    cout << "\n\n\n";
    cout<<"Enter file name: "<<endl;
    cin>>fn;
    cout<<"Enter data type: "<<endl;
    cin>>dt;
    cout << "Enter 1 for new entry and 2 for displaying owned account information: ";
    cin >> x;
    switch (x)
    {
    case 1:
        system("cls");
        obj.writefile(fn,dt);
        break;
    case 2:
        system("cls");
        obj.datadisplay(fn,dt);
        break;
    }
    return 0;
}