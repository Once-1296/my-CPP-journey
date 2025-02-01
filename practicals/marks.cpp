#include <iostream>
int main()
{
    system("cls");
    int marks[4];
    do
    {
        system("cls");
        std::cout << "Marks are in range 0 to 100\n";
        int i = 0;
        std::cout << "Enter your marks in Mechanics subject: ";
        std::cin >> marks[i];
        i++;
        std::cout << "Enter your marks in Chemistry subject: ";
        std::cin >> marks[i];
        i++;
        std::cout << "Enter your marks in Mathematics subject: ";
        std::cin >> marks[i];
        i++;
        std::cout << "Enter your marks in Programming subject: ";
        std::cin >> marks[i];
        i++;
        std::cout << "Enter your marks in English subject: ";
        std::cin >> marks[i];

    } while ((marks[0] < 0 || marks[0] > 100) || (marks[1] < 0 || marks[1] > 100) || (marks[2] < 0 || marks[2] > 100) || (marks[3] < 0 || marks[3] > 100) || (marks[4] < 0 || marks[4] > 100));
    int total = 0;
    for (int i = 0; i < 5; i++)
    {
        total += marks[i];
    }
    float avg = (float)total / 5;
    std::cout << "\nTotal is:  " << total;
    std::cout << "\nAverage is:  " << avg << std::endl;
    if (avg >= 90.0 && avg <= 100.0)
    {
        std::cout << "Grade is A+";
    }
    else if (avg >= 80.0 && avg < 90.0)
    {
        std::cout << "Grade is A";
    }
    else if (avg >= 70.0 && avg < 80.0)
    {
        std::cout << "Grade is B";
    }
    else if (avg >= 60.0 && avg < 70.0)
    {
        std::cout << "Grade is C";
    }
    else if (avg >= 40.0 && avg < 60.0)
    {
        std::cout << "Grade is D";
    }
    else
    {
        std::cout << "Grade is F";
    }

    return 0;
}
