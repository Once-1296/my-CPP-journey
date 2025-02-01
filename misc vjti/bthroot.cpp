#include<iostream>
#include<math.h>
using namespace std;
class roots
{
private:
public:
int b,a;
roots(int a1, int b1)
{
a = a1;
b = b1;
}
long double findroots(int a, int b)
{
long double temp = 1 ;
for (int i = a/b;i>0;i--)
{
if(pow(i,b) <= a && pow(i + 1, b) > a) 
{
temp = i;
break;
}
}
int i = b;
while(i > 0)
{
long double t2 = (((b - 1)*temp) + (a/pow(temp,b-1)))/b;
temp = t2;
i--;
}
return temp;
}
};
int main()
{
int a,b;
while(1)
{
    system("cls");
    cout<<"\nEnter number (> 1) and root( > 1) to find\n";
    cin>>a>>b;
    if(a > 1 && b > 1)break;
}
roots r1(a,b);
cout<<endl<<r1.findroots(r1.a,r1.b);
return 0;
}