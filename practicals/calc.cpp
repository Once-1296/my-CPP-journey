#include <iostream>
int main()
{
    int option;
    long double a, b;
    long double result;
    bool carry = false, goon = false;
    char c, c2;
    do
    {
        system("cls");
        std::cout << "1 for addition\n 2 for subtraction \n3 for multilplication\n 4 for division\n";
        std::cin >> option;
        switch (option)
        {
        case 1:
            if (carry)
            {
                std::cout << "Enter next operand: \n ";
                a = result;
                result = 0.0;
                std::cout << a << "\n+\n";
                std::cin >> b;
                std::cout << std::endl
                          << a << "+" << b << "=" << a + b;
                result = a + b;
            }
            else
            {
                std::cout << "Enter operands: \n ";
                std::cin >> a;
                std::cout << "+\n";
                std::cin >> b;
                std::cout << std::endl
                          << a << "+" << b << "=" << a + b;
                result = a + b;
            }
            std::cout << "\nWould you like to continue?[y/n] ";
            std::cin >> c;
            if (c == 'y' || c == 'Y')
            {
                goon = true;
            }
            else
            {
                goon = false;
            }
            break;
        case 2:
            if (carry)
            {
                std::cout << "Enter next operand: \n ";
                a = result;
                result = 0.0;
                std::cout << a << "\n-\n";
                std::cin >> b;
                std::cout << std::endl
                          << a << "-" << b << "=" << a - b;
                result = a - b;
            }
            else
            {
                std::cout << "Enter operands: \n ";
                std::cin >> a;
                std::cout << "-\n";
                std::cin >> b;
                std::cout << std::endl
                          << a << "-" << b << "=" << a - b;
                result = a - b;
            }
            std::cout << "\nWould you like to continue?[y/n] ";
            std::cin >> c;
            if (c == 'y' || c == 'Y')
            {
                goon = true;
            }
            else
            {
                goon = false;
            }
            break;
        case 3:
            if (carry)
            {
                std::cout << "Enter next operand: \n ";
                a = result;
                result = 0.0;
                std::cout << a << "\n*\n";
                std::cin >> b;
                std::cout << std::endl
                          << a << "*" << b << "=" << a * b;
                result = a * b;
            }
            else
            {
                std::cout << "Enter operands: \n ";
                std::cin >> a;
                std::cout << "*\n";
                std::cin >> b;
                std::cout << std::endl
                          << a << "*" << b << "=" << a * b;
                result = a * b;
            }
            std::cout << "\nWould you like to continue?[y/n] ";
            std::cin >> c;
            if (c == 'y' || c == 'Y')
            {
                goon = true;
            }
            else
            {
                goon = false;
            }
            break;
        case 4:
            if (carry)
            {
                std::cout << "Enter next operand: \n ";
                a = result;
                result = 0.0;
                std::cout << a << "\n/\n";
                std::cin >> b;
                std::cout << std::endl
                          << a << "/" << b << "=" << a / b;
                result = a / b;
            }
            else
            {
                std::cout << "Enter operands: \n ";
                std::cin >> a;
                std::cout << "/\n";
                std::cin >> b;
                std::cout << std::endl
                          << a << "/" << b << "=" << a / b;
                result = a / b;
            }
            std::cout << "\nWould you like to continue?[y/n] ";
            std::cin >> c;
            if (c == 'y' || c == 'Y')
            {
                goon = true;
            }
              else
            {
                goon = false;
            }
            break;
        default:
        std::cout<<"Enter correct choice.";
            break;
        }
        if (goon)
        {
            std::cout << "Would like to continue with the last result?[y/n] ";
            std::cin >> c2;
            if (c2 == 'y' || c2 == 'Y')
            {
                carry = true;
            }
        }
        else
        {
            carry=false;
        }
        
    } while (goon);
    return 0;
}