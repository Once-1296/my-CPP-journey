#include<iostream>
using namespace std;
class A{
int a;
public:
A(int Anum);
A(A *obja);
};
class B:public A{
int b;
public:
B(int Bnum,int Anum);
B(B *objb,A *obja);
};
class C:public B{
int c;
public:
C(int Cnum,int Bnum,int Anum);
C(C *objc,B *objb,A *obja);
};
A :: A(int Anum)
{
    a = Anum;
}
A :: A(A *obja){
this->a = obja->a;
cout<<"Hello from A copy constructor. Number: "<<a<<endl;
}
B :: B(int Bnum,int Anum) : A(Anum){
    b = Bnum;
}
B :: B(B *objb,A *obja):A(obja){
    this ->b=objb->b;
cout<<"Hello from B copy constructor. Number: "<<b<<endl;
}
C :: C(int Cnum,int Bnum,int Anum) : B(Bnum,Anum){
    c = Cnum;
}
C :: C(C *objc,B *objb,A *obja): B(objb, obja){
this->c = objc->c;
cout<<"Hello from C copy constructor. Number: "<<c<<endl;
}
int main(){
    int n1,n2,n3;
    system("cls");
    cout<<"Enter 3 Numbers.";
    cin>>n1>>n2>>n3;
    C objc(n3,n2,n1);
    B objb(n2,n1);
    A obja(n1);
    C objc2(&objc,&objb,&obja);
return 0;
}