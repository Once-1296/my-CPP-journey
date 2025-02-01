#include <iostream>
struct kuchbhi
{
    int kuchto[10];
};
int main()
{
    system("cls");
    std::cout << "Enter 10 numbers:\n";
    kuchbhi kaiko;
    for (int i = 0; i < 10; i++)
    {
        std::cin >> kaiko.kuchto[i];
    }
    for (int i = 0; i < 10; i++)
    {
        std::cout << "Number " << i + 1 << " : " << kaiko.kuchto[i] << std::endl;
    }
    return 0;
}