#include <iostream>
class student
{
private:
    std::string first_name;
    std::string last_name;
    int roll_no;
    int std;
    int age;
    float grades;

public:
    student()
    {
        system("cls");
        std::cout << "Enter your first name and last name:\n";
        std::cin >> first_name >> last_name;
        std::cout << "Enter your rollno,std,age,grades in that order:\n";
        do
        {
            std::cin >> roll_no >> std >> age >> grades;
        } while (!(roll_no > 0 && (std > 0 && std < 21) && age > 0 && (grades >= 0 && grades <= 100)));
        display();
    }
    void display()
    {
        std::cout << "First name: " << first_name << std::endl;
        std::cout << "Last name: " << last_name << std::endl;
        std::cout << "Roll no:  " << roll_no << std::endl;
        std::cout << "Std: " << std << std::endl;
        std::cout << "Age: " << age << std::endl;
        std::cout << "Grades: " << grades << std::endl;
    }
};
int main()
{
    student stu;
    return 0;
}