#include <iostream>
typedef unsigned long long int ulli;
ulli fact(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
else
{
    return n*fact(n - 1);
}
}
int main() {
    system ("cls");
    std::cout<<"Enter a number\n";
    int a;
    std::cin>>a;
std::cout<<std::endl<<"Factorial of "<<a<<" is "<<fact(a);
    return 0;
}