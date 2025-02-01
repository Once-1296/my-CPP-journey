#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    long double a, b, c, delta, alpha, beta;
    int w1;
    float w2;
    cout << "Enter the coefficients of the quadratic equation: " << endl;
    cin >> a >> b >> c;
    delta = (b * b) - (4 * a * c);
    cout<<"The equation is "<<a<<"x^2 + "<<b<<"x + "<<c<<endl;
    w1 = (int)delta;
    w2 = float(delta);
    try
    {
        if (delta < 0)
            throw delta;
        if (delta == 0)
            throw w1;
        if (delta > 0)
            throw w2;
    }
    catch (long double x)
    {
        cout << "The discriminant is " << x << " ,ie less than zero. The roots are not real.";
    }
    catch (int x)
    {
        cout << "The discriminant is " << x << " ,ie  zero." << endl;
        alpha = -b / (2 * a);
        cout << "The singular root is " << alpha << endl;
    }
    catch (float x)
    {
        cout << "The discriminant is " << x << " ,ie greater than zero." << endl;
        alpha = (-b + sqrt(x)) / (2 * a);
        beta = (-b - sqrt(x)) / (2 * a);
        cout<<"The roots of the equation are "<<alpha<<","<<beta;
    }
    return 0;
}