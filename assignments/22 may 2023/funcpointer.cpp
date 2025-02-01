#include<iostream>
using namespace std;
void callfunc(int (*f2)(int,int),int num1,int num2){
    int sum = f2(num1,num2);
    cout<<"Sum of  "<<num1<<" and "<<num2<<" is "<<sum<<endl;
}
int sum(int num1,int num2){
    int sum = num1 + num2;
    return sum;
}
int main(){
    int n1,n2;
    system ("cls");
    cout<<"Enter two positive integers : ";
   cin>>n1>>n2;
    callfunc(&sum,n1,n2);
return 0;
}