#include<iostream>
#include<string>
using namespace std;
class example
{
public:
int number;
string words;
float decimal_number;
int arrnum[10];
};
int main()
{
    example object;
    object.number = 100;
    object.decimal_number = 3.142;
    object.words = "Hello";
    int i =0;
    cout<<"Enter 10 numbers\n";
    while (i<10)
    {
        cin>>object.arrnum[i];
        i++;
    }
    
    cout<<object.decimal_number<<endl<<object.number<<endl<<object.words<<endl;
    i=0;
    while (i<10)
    {
        cout<<object.arrnum[i]<<endl;
        i++;
    }
    
}