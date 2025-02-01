/* C++ program to find Sum of numbers using Overload template function  */

#include <iostream>
using namespace std;

template <class t1, class t2>
void sum(t1 a, t1 b,  t2 c, t2 d)
{
    cout << "\nTemplate function 1: Sum = " << a + b + c + d<< endl;
}

template <class t1, class t2>
void sum(t1 a, t1 b, t2 c)
{
    cout << "\nTemplate function 2: Sum = " << a + b + c << endl;
}

void sum(int a, int b)
{
    cout << "\nNormal function: Sum = " << a + b << endl;
}

int main()
{
    int a, b, c, d;
    float x, y, z;
    cout << "\nEnter four integer data: ";
    cin >> a >> b >>c>>d;
    cout << "\nEnter three float data: ";
    cin >> x >> y >> z;

    sum(a, b, c, d);    // calls first template function
    sum(x, y, z); // calls second template function
    sum(a, b);    // calls normal function
    return 0;
}