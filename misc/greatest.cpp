#include<iostream>
using namespace std;
int main()
{
int a,b,c;
cout<<"Enter three integer values";
cin>>a>>b>>c;
if(a>b&&a>c){
    cout<<a<<" is the greatest";
}
if(b>a&&b>c){
    cout<<b<<" is the greatest";
}
if(c>b&&c>b){
    cout<<c<<" is the greatest";
}
 return 0;
}