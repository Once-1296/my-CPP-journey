#include <iostream>
using namespace std;
class Operations
{
private:
    int num1, num2;
public:
    int sum, difference, product;
    double quotient;
    void add();
    void subtract();
    void multiply();
    void divide();
    Operations(int n1, int n2);
    ~Operations();
};
Operations ::Operations(int n1, int n2)
{
    num1 = n1;
    num2 = n2;
    cout << "In constructor: " << endl;
    cout << "You entered " << num1 << " and " << num2 << endl;
}

void Operations ::add()
{
    sum = num1 + num2;
    cout << endl
         << "Sum "
         << " is " << sum;
}
void Operations::subtract()
{
    difference = num1 - num2;
    cout << endl
         << "Difference between "
         << " is " << difference;
}

void Operations ::multiply()
{
    product = num1 * num2;
    cout << endl
         << "Product "
         << " is " << product;
}
void Operations ::divide()
{
    quotient = double(num1) / double(num2);
    cout << endl
         << "Division "
         << " is " << quotient << endl;
}
Operations ::~Operations()
{
    cout << "In destructor";
}

int main()
{

    int num1, num2;
    system("cls");
    cout << "Enter two numbers: " << endl;
    cin >> num1 >> num2;
    system("cls");
    Operations object(num1, num2);
    object.add();
    object.subtract();
    object.multiply();
    object.divide();
    return 0;
}