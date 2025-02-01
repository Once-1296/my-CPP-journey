#include<iostream>
using namespace std;
template <typename T = int>
T sum(T x = 20, T y = 10){
return x + y;
}
int main(){
float a = sum(40, 50);
cout << "\n"<<a;
 a = sum('!', 'B');
cout << "\n"<<a;
 a = sum(4.2,3.5);
cout << "\n"<<a;
int x, y;
cout << "\n"<<a;
return 0;
}