#include<iostream>
#include<fstream>
using namespace std;
class A1{
public:
string files;
A1(){
}
void input(string f){
    files =f;
}
A1 operator+(A1 const &ob1){
  A1 ob2;
  ob2.files = files + ob1.files;
    return ob2;
}

};
int main(){
    A1 o1,o2,o3;
    o1.input("name");
    o2.input(".txt");
    o3 = o1 + o2;
    string file = o3.files;
    fstream open(file,ios::out);
    return 0;
}