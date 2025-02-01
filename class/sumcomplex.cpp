#include <iostream>
using namespace std;
int main()
{
    class complex
    {
    public:
        double real1, real2;
        double imag1, imag2;
        double sumreal()
        {
            return real1 + real2;
        }
        double sumimag()
        {
            return imag1 + imag2;
        }
    };
    complex input;
    double R1, R2, I1, I2;
    cout << "Enter real parts ";
    cin >> R1 >> R2;
    cout << "Enter imaginary parts ";
    cin >> I1 >> I2;
    input.real1 = R1;
    input.real2 = R2;
    input.imag1 = I1;
    input.imag2 = I2;
    cout << "Sum of " << R1 << " + " << I1 << "i and " << R2 << " + " << I2 << "i is " << input.sumreal() << " + " << input.sumimag() << "i";
    return 0;
}