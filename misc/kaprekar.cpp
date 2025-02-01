#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long int x = n*n;
    int i = 0;
    while(x)
    {
        x/=10;
        i++;
    }
    x = n*n;
    int sum1 = 0,prod1 =1;
    for (int j = 0; j < (i+1)/2; j++)
    {
        sum1+= prod1*(x%10);
        x/=10;
        prod1*=10;
    }    
    cout<<sum1<<endl;
    int sum2 = 0, prod2 = 1;
    for (int j = 0; j < i/2; j++)
    {
        sum2+= prod2*(x%10);
        x/=10;
        prod2*=10;
    }
    cout<<sum2<<endl;
    if(sum1 + sum2 == n)
    {
        cout<<"Kaprekar number";
    }
    else
    {
        cout<<"Not Kaprekar number";
    }
    return 0;
}