#include <iostream>
#include <string>
int main()
{
    std::string s1, s2, s3;
    char c;
    std::cout << "Enter string: \n";
    std::cin >> s1;
    std::cout << "\n Number of characters is: " << s1.length();
    std::cout << "\nEnter another string:\n";
    std::cin >> s2;
    std::cout << "\n Number of characters is: " << s2.length();
    s3 = s1;
    s1.append(s2);
    std::cout << "\n Combining them: " << s1;
    s1 = s3;
    if (s1.compare(s2))
    {
        std::cout << "\n Both are not same.";
    }
    else
    {
        std::cout << "\n Both are same.";
    }
    return 0;
}