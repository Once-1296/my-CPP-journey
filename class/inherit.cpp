#include<iostream>
using namespace std;
class A{
    public:
    A(){
        cout<<"this is A class cons.."<<endl;
    }
    A(int anum){
        cout<<"this is A class parameter cons.. and number is : "<< anum <<endl;
    }
};
class B : public A {
    public:
    B(){
        cout<<"this is B class cons.."<<endl;
    }
    B(int Bnum, int Anum) : A(Anum){
        cout<<"this is B class parameter cons.. and number is : "<< Bnum <<endl;
    }
};
class C : public B {
    public:
    C(){
        cout<<"this is C class cons.."<<endl;
    }
    C(int Cnum,int Bnum, int Anum) : B(Bnum,Anum){
        cout<<"this is C class parameter cons.. and number is : "<< Cnum <<endl;
    }
};

int main(){
   C c(30,20,10); 

    return 0;
}
