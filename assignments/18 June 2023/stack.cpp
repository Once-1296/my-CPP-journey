#include <iostream>
#include <fstream>
#include <vector>
#include<stack>
#include <string>
#include <sstream>
using namespace std;

class Data
{
public:
    stack <string> rowData;
};
class Data2: public Data
{
public:
    string fn;
    void readfile(string filename)
    {
        fn = filename;
        ifstream inputFile(fn);
        stack <Data> dataStack;
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
                data.rowData.push(word);
            }
            dataStack.push(data);
        }
        int i = countcol(fn), j = countline(fn);
        // Print data
        cout<<"Reading file data. "<<endl<<endl;
   while (!dataStack.empty()) {
    cout<<"Displaying Data of student no "<<j<<endl;
        i = countcol(fn);
        while (!(dataStack.top().rowData.empty()))
        {
            cout<<"Column "<<i<<" : "<<columnme[i - 1]<<dataStack.top().rowData.top()<<endl;
            dataStack.top().rowData.pop();
            i--;
        }
        cout<<endl;
        j--;
        dataStack.pop();
    }
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
        system("cls");
        obj.readfile(fn);
    
    return 0;
}