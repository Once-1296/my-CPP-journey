#include<iostream>
using namespace std;
class Overloaded{
public:
int num1;
Overloaded(int n1 = 0){
num1 = n1;
}
Overloaded operator+(Overloaded const &ob){
Overloaded result;
result.num1 = num1 + ob.num1;
return result;
}
Overloaded operator-(Overloaded const &ob){
Overloaded result;
result.num1 = num1 - ob.num1;
return result;
}
Overloaded operator*(Overloaded const &ob){
Overloaded result;
result.num1 = num1 * ob.num1;
return result;
}
Overloaded operator/(Overloaded const &ob){
Overloaded result;
result.num1 = num1 / ob.num1;
return result;
}
Overloaded operator%(Overloaded const &ob){
Overloaded result;
result.num1 = num1 % ob.num1;
return result;
}
Overloaded operator++(){
++num1;
return *this;
}
Overloaded operator++(int){
Overloaded result = *this;
++num1;
return result;
}
Overloaded operator--(){
--num1;
return *this;
}
Overloaded operator--(int){
Overloaded result = *this;
--num1;
return result;
}
Overloaded operator=(Overloaded const &ob){
num1 = ob.num1;
return num1;
}
Overloaded operator+=(Overloaded const &ob){
num1 += ob.num1;
return num1;
}
Overloaded operator-=(Overloaded const &ob){
num1 -= ob.num1;
return num1;
}
Overloaded operator*=(Overloaded const &ob){
num1 *= ob.num1;
return num1;
}
Overloaded operator/=(Overloaded const &ob){
num1 /= ob.num1;
return num1;
}
Overloaded operator%=(Overloaded const &ob){
num1 %= ob.num1;
return num1;
}
};
int main(){
    int i,j,k;
    cout<<"Enter two numbers: "<<endl;
    cin>>i>>j;
    Overloaded ob1(i),ob2(j),ob3;
    ob3 = ob1 + ob2;
    cout<<"Sum:"<<ob3.num1<<endl;
    ob3 = ob1 - ob2;
    cout<<"Difference"<<ob3.num1<<endl;
    ob3 = ob1 * ob2;
    cout<<"Product:"<<ob3.num1<<endl;
    ob3 = ob1 / ob2;
    cout<<"Quotient:"<<ob3.num1<<endl;
    ob3 = ob1 % ob2;
    cout<<"Remainder:"<<ob3.num1<<endl;
    cout<<"Enter another value: "<<endl;
    cin>>k;
    Overloaded ob4(k),ob5;
    ob5 = ++ob4;
    cout<<"Pre increment: "<<ob4.num1<<endl;
    ob5 = ob4--;
    ob5 = ob4++;
    cout<<"Post increment: "<<ob4.num1<<endl;
    ob5 = ob4--;
    ob5 = --ob4;
    cout<<"Pre decrement: "<<ob4.num1<<endl;
    ob5 = ob4++;
    ob5 = ob4--;
    cout<<"Post decrement: "<<ob4.num1<<endl;
   Overloaded ob6 = ob1;
    cout<<"Assignment: "<<ob6.num1<<endl;
    ob1+=ob2;
    cout<<"Add assign of i and j: "<<ob1.num1<<endl;
    ob1 = ob6;
    ob1-=ob2;
    cout<<"Subtract assign of i and j: "<<ob1.num1<<endl;
    ob1 = ob6;
    ob1*=ob2;
    cout<<"Multiply assign of i and j: "<<ob1.num1<<endl;
    ob1 = ob6;
    ob1/=ob2;
    cout<<"Divide assign of i and j: "<<ob1.num1<<endl;
    ob1 = ob6;
    ob1%=ob2;
    cout<<"Modulus assign of i and j: "<<ob1.num1<<endl;
    ob1 = ob6;
    return 0;
}