#include <iostream>
class Complex
{
public:
    Complex(double real, double imag) : real(real), imag(imag) {}
    // Declare the '+' operator as a friend
    friend Complex operator+(const Complex &c1, const Complex &c2);
    // Display the complex number
    void display() const
    {
        std::cout << std::endl
                  << real << " + " << imag << "i" << std::endl;
    }

private:
    double real, imag;
};
// Define the '+' operator using a friend function
Complex operator+(const Complex &c1, const Complex &c2)
{
    return Complex(c1.real + c2.real, c1.imag + c2.imag);
}
int main()
{
    system("cls");
    Complex c1(2.0, 3.0);
    c1.display();
    Complex c2(1.5, 2.5);
    c2.display();
    // Use the overloaded '+' operator
    Complex sum = c1 + c2;
    std::cout << "Sum: ";
    sum.display();
    return 0;
}
