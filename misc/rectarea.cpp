#include <iostream>
inline float rectarea(float length, float breadth)
{
    float Area = length * breadth;
    return Area;
}

using namespace std;
int main()
{

    float l, b;

    cout << "Enter length and breadth";
    cin>>l>>b;
    cout<<"Area of rectangle with length "<<l<<" and breadth "<<b<<
    " is "<< rectarea(l,b);

    return 0;
}

