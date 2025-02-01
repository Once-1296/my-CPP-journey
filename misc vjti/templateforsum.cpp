#include <iostream>
#include<vector>
using namespace std;
template <typename T>
T sum(vector<T>&Tvec)
{
    T res = static_cast<T>(0);
    for(auto &a : Tvec)
    {
        res += a;
    }
    return res;
}
int main() {
//Works for int,long int ,short,long long int, float,double etc, basically numbers
system("cls");
vector<float> fvec;
int size;
cout<<" Enter no of elements";
cin >> size;
int i = 0;
while(i < size)
{
    float temp;
    cin>>temp;
    fvec.push_back(temp);
    i++;    
}
cout<<endl<<sum(fvec);
    return 0;
}