#include<iostream>
using namespace std;
class base1{
public:
base1(){
cout<<"Hello from base class constructor: "<<endl;
}
};
class singlederived:public base1{
public:
singlederived(){
    cout<<"Hello from derived class constructor: "<<endl;
}
};
int main(){
singlederived object;
return 0;
}