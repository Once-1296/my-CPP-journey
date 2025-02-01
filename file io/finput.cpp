#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    ifstream file("awwab.txt");
    
   string  myname="awwab";
   while(getline(file,myname)){
cout<<myname<<endl;
   }

  file.close();
 
    return 0;
}