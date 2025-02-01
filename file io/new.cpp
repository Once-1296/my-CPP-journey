#include<iostream>
#include<fstream>
using namespace std;
int main(){
    fstream file("awwab.txt");
    file <<"Hello "<<endl;
    file<<"hi this is c++"<<endl;
    file<<"this is file topic";
    file.close();

    return 0;
}