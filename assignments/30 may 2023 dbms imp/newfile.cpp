#include <iostream>
#include <fstream>
#include<string>
#include<sstream>
using namespace std;
int main(){
    string column = "name,age,address,contact,email";
    stringstream obj(column);
    string token;
   while (getline(obj,token,','))
   {
   cout<<"Token = "<<token<<endl;
   }
   
        return 0;
}