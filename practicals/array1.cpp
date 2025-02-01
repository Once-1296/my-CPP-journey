#include <iostream>
#include <vector>
int possum(int n);
int negsum(int n);
float avgsum(int n);
int main()
{
    int option, size, psum, nsum;
    float avg;
    bool goon = false;
    char c;
    do
    {
        system("cls");
        std::cout << "1. sum of positive numbers \n 2.sum of negative numbers\n3. average of integers\n";
        std::cin >> option;
        switch (option)
        {
        case 1:
            std::cout << "Enter size of array:  ";
            std::cin >> size;
            if (size < 0)
            {
                size *= -1;
            }
            psum = possum(size);
            std::cout << " Sum = " << psum;
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
            std::cout << "Enter size of array:  ";
            std::cin >> size;
            if (size < 0)
            {
                size *= -1;
            }
            nsum = negsum(size);
            std::cout << " \nSum = " << nsum << std::endl;
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
            std::cout << "Enter size of array:  ";
            std::cin >> size;
            if (size < 0)
            {
                size *= -1;
            }
            avg = avgsum(size);
            std::cout << " Avg = " << avg;
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
            std::cout << "Enter correct choice";
            break;
        }
    } while (goon);

    return 0;
}
int possum(int n)
{
    std::vector<int> v;
    int temp;
    for (int i = 0; i < n; i++)
    {
        std::cout << "Enter element " << i + 1 << "  ";
        std::cin >> temp;
        if (temp < 0)
        {
            v.push_back(-temp);
        }
        else
        {
            v.push_back(temp);
        }
    }
    int sum = 0;
    for (int i = 0; i < v.size(); i++)
    {
        sum += v[i];
    }
    return sum;
}
int negsum(int n)
{
    std::vector<int> v;
    int temp;
    for (int i = 0; i < n; i++)
    {
        std::cout << "Enter element " << i + 1 << "  ";
        std::cin >> temp;
        if (temp > 0)
        {
            v.push_back(-temp);
        }
        else
        {
            v.push_back(temp);
        }
    }
    int sum = 0;
    for (int i = 0; i < v.size(); i++)
    {
        sum += v[i];
    }
    return sum;
}
float avgsum(int n)
{
    std::vector<int> v;
    int temp;
    for (int i = 0; i < n; i++)
    {
        std::cout << "Enter element " << i + 1 << "  ";
        std::cin >> temp;
        v.push_back(temp);
    }
    float sum = 0.0;
    for (int i = 0; i < v.size(); i++)
    {
        sum += static_cast<float>(v[i]);
    }
    sum /= v.size();
    return sum;
}