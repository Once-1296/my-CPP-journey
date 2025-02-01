#include<iostream>
#include<vector>
#include<sstream>
#include<fstream>
using namespace std;
int main(){
     string token;
    fstream object("school.txt",ios::in);
    
   while(object.good()){
    int x = 0;
while(getline(object,token,',')){
if ( x == 0)
{
cout<<"name "<<token<<endl;
}
if (x == 1)
{
cout<<"age "<<token<<endl;
}
if ( x == 2)
{
cout<<"city "<<token<<endl;
}
if ( x == 3)
{
cout<<"college "<<token<<endl;
}
x++;
}
    }
    object.close();
    return 0;
}
