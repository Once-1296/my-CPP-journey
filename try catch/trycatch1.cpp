#include <iostream>
using namespace std;
int main()
{
    float numer, denom;
    cout << "Enter numerator and denominator "<<endl;
    cin >>numer>>denom;
    try{
        if(denom == 0)
        throw denom;
        else
        throw double(denom);
    }
    catch (float x){
        cout<<" The denominator is zero. The ratio is not defined as division by zero doesnt exist.";
        
    }
    catch(double x)
    {
float ratio = numer/x;
cout<< "The ratio is "<<ratio;
    }
    return 0;
}