#include<iostream>
#include<vector>
#include<sstream>
#include<string>
using namespace std;
int main(){
    string name="Awwab,Sajid,Wadekar";
    stringstream object(name);
    string token;
    while(object.good()){
getline(object,token,',');
cout<<token<<endl;
    }
    return 0;
}
