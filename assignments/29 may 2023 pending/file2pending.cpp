#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include<sstream>
using namespace std;

class Data {
public:
    vector<string> rowData;
};

int main() {
    ifstream inputFile("student.txt");
    vector<Data> dataVec;
    // Read data from file
    string line,word;
    getline(inputFile, line);
        int counter = 0;
        stringstream obj(line);
        while (getline(obj, word, ','))
        {
            cout << "Column " << counter + 1 << ": " << word << endl;
            counter++;
        }
        cout << "Number of columns is: " << counter << endl;
       vector<string>columnme;
        inputFile.seekg(0,ios::beg);
        getline(inputFile, line);
        stringstream obj2(line);
        counter = 0;
        while (getline(obj2, word, ','))
        {
            columnme.push_back(word);
            counter++;
        }
    while (getline(inputFile, line)) {
        Data data;
        // Parse line into columns
       stringstream obj(line);
        while (getline(obj,word,',')) {
       data.rowData.push_back(word);
        }
        dataVec.push_back(data);
    }
    int i = 1,j = 0;
    // Print data
    for (auto& data : dataVec) {
        cout<<"Displaying data of student "<<i<<endl;
        j = 0;
        for (auto& item : data.rowData) {
            cout <<"Column "<<j+1<<" : "<<columnme[j]<<" : "<< item << endl;
            j++;
        }
        i++;
        cout <<endl<<endl<<"*******************************************************************************"<<endl<<endl;
    }
return 0;
}