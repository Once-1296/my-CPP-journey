#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int a,b,c;
cout<<"Enter 3 numbers \n";
cin>>a;
cin>>b;
cin>>c;
if(a>b&&a>c){
    cout<<a<<" is the greatest";
}
if(b>a&&b>c){
    cout<<b<<" is the greatest";
}
if(c>a&&c>b){
    cout<<c<<" is the greatest";
}
   return 0;
}