#include <iostream>
#include <string>
struct array2
{
    std::string first_name;
    std::string last_name;
    std::string occupation;
    int age;
};

int main()
{
    array2 arr[10];
    for (int i = 0; i < 10; i++)
    {
        std::cout << "enter employee " << i + 1 << " first name: ";
        std::cin >> arr[i].first_name;
        std::cout << "enter employee " << i + 1 << " last name: ";
        std::cin >> arr[i].last_name;
        std::cout << "enter employee " << i + 1 << " age: ";
        std::cin >> arr[i].age;
        std::cout << "enter employee " << i + 1 << " occupation: ";
        std::cin >> arr[i].occupation;
    }
    for (int i = 0; i < 10; i++)
    {
        std::cout << "Employee " << i + 1 << std::endl;
        std::cout << "First Name: " << arr[i].first_name << std::endl;
        std::cout << "Last Name: " << arr[i].last_name << std::endl;
        std::cout << "Age: " << arr[i].age << std::endl;
        std::cout << "Occupation: " << arr[i].occupation << std::endl;
    }

    return 0;
}