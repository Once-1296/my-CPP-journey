#include <iostream>
using namespace std;
#include<string>
template<typename T = int>
T sum(T a = 0, T b = 0)
{
    return a + b;
}
auto sum(const char*a,const char*b){
    return string(a)+ string(b);
}
int main()
{

    cout<<"\nSum of two integer data: ";
    int i = sum(10,29);
    cout<<i;
    cout<<"\nSum of two float data: ";
    float f =  sum(9.6,7.8);
    cout<<f;
    cout<<"\nSum of two character data: ";
    char c = sum(' ','!');
    cout<<c;
    cout<<"\nSum of two string data: ";
    string s = sum("awwab","wadekar");
    cout<<s;
 return 0;
 
}