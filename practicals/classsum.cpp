#include <iostream>
class add
{
private:
    int x, y;

public:
    add(int a, int b)
    {
        x = a;
        y = b;
        std::cout << "Sum of " << x << " and " << y << " is " << retsum();
    }
    int retsum()
    {
        return x + y;
    }
};
int main()
{
    system("cls");
    int a, b;
    std::cout << "Enter 2 numbers to add: \n";
    std::cin >> a >> b;
    add obj(a, b);
    return 0;
}