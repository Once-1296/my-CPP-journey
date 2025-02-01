#include <iostream>
#include<vector>
using namespace std;
void fibonacci(int n)
{
 int a = 0, b = 1;
 int c;
 cout<<endl<<a<<endl<<b;
 while(n > 2)
 {
     c = a + b;
     a = b;
     b = c;
     cout<<endl<<c;
     n--;
 }
}
int fib2(int n)
{
    if (n == 1 || n == 0)
    {
        return n;
    }
else
{
    return fib2(n-1) + fib2(n -2);
    
}
}
int main() {
    system("cls");
    int n;
    cout<<"Print __ number of fibonacci series: \n";
    cin>>n;
    for(int i = 0;i<n;i++)
    {
        cout<<endl<< fib2(i);
    }
    return 0;
}