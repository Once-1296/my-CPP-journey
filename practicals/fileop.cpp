#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
int main()
{
    system("cls");
    std::string line;
    srand(time(NULL));
    std::ofstream o("randnum.txt");
    for (int i = 0; i < 100; i++)
    {
        o << (rand() % 100) + 1 << std::endl;
    }
    o.close();
    std::cout << "\nDisplaying 100 random numbers between 1 and 100.\n";
    std::ifstream i("randnum.txt");
    for (int i1 = 0; i1 < 100; i1++)
    {
        getline(i, line);
        std::cout << line << std::endl;
    }
    return 0;
}