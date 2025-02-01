#include<iostream>
#include<vector>

std::vector<int> fibonacci(int n);
int main()
{
    system("cls");
    int n;
    std::cout<<"Enter length of fibonacci series: ";
    std::cin>>n;
    std::vector<int> arra = fibonacci(n);
    std::cout<<"Printing fibonacci series: ";
    for (int i = 0; i < arra.size(); i++)
    {
        std::cout<<std::endl<<arra[i];
    }
    return 0;
}
std::vector<int> fibonacci(int n)
{
    int a =0, b=1;
    std::vector<int> arr;
    arr.push_back(a);
    arr.push_back(b);
    for(int i = 0;i<n-2;i++)
    {
        int c = a+b;
        arr.push_back(c);
        a=b;
        b=c;
    }
    return arr;
}
