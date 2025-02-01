#include<iostream>
#include<fstream>
using namespace std;
class derived : public fstream{
public:
void open();
void close();
};
void derived :: open(){
cout<<"In derived class,opening file"<<endl;
fstream::open("demo.txt",ios::out);
}
void derived :: close(){
fstream :: close();
cout<<"Closing file,exiting derived class";
}
int main(){
    derived obj;
    obj.open();
    obj.close();
    return 0;
}