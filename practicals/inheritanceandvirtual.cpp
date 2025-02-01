#include <iostream>
class shape
{
protected:
    double a, b;

public:
    virtual void display_area() = 0;
    void get_area();
};
class triangle : private ::shape
{
public:
    triangle();
    void display_area();
};
class rectangle : private ::shape
{
public:
    rectangle();
    void display_area();
};
triangle::triangle()
{
    std::cout << "Enter the base and height: " << std::endl;
    get_area();
    display_area();
}
void triangle::display_area()
{
    double area = 0.5 * a * b;
    std::cout << "\nArea of triangle with base " << a << " and height " << b << " is " << area;
}
void shape::get_area()
{
    std::cin >> a >> b;
}
rectangle::rectangle()
{
    std::cout << "Enter the length and breadth: " << std::endl;
    get_area();
    display_area();
}
void rectangle::display_area()
{
    double area = a * b;
    std::cout << "\nArea of rectangle with length " << a << " and breadth " << b << " is " << area;
}

int main()
{
    int opt;
    system("cls");
    std::cout << "1 for triangle and 2 for rectangle.";
    std::cin >> opt;
    switch (opt)
    {
    case 1:
    {
        triangle t;
        break;
    }
    case 2:
    {
        rectangle r;
        break;
    }
    default:
        std::cout << "\n Enter correct choice.";
        break;
    }
    return 0;
}
