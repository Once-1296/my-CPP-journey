#include <iostream>
class rectangle
{
private:
public:
    double width, length, area;
    std::string colour;
    rectangle(double l, double w, std::string c);
    int operator==(rectangle const &obj);
    double get_length(double l);
    double get_width(double w);
    std::string get_colour(std::string c);
    void find_area();
};

rectangle::rectangle(double l, double w, std::string c)
{
    double l1 = l, w1 = w;
    std::string c1 = c;
    get_length(l1);
    get_width(w1);
    get_colour(c1);
    find_area();
    std::cout << "\nlength: " << length
              << "\nwidth: " << width
              << "\ncolour: " << colour
              << "\narea: " << area << std::endl;
}
int rectangle::operator==(rectangle const &obj)
{
    if (obj.area == area && obj.colour == colour)
        return 1;
    else
        return 0;
}

double rectangle::get_length(double l)
{
    length = l;
    return 0.0;
}

double rectangle::get_width(double w)
{
    width = w;
    return 0.0;
}

std::string rectangle::get_colour(std::string c)
{
    colour = c;
    return "0";
}

void rectangle::find_area()
{
    area = length * width;
}
int main()
{
    double l, w;
    std::string c;
    std::cout << "Enter length: ";
    std::cin >> l;
    std::cout << "Enter width: ";
    std::cin >> w;
    std::cout << "Enter colour: ";
    std::cin >> c;
    rectangle a(l, w, c);
    std::cout << "Enter length: ";
    std::cin >> l;
    std::cout << "Enter width: ";
    std::cin >> w;
    std::cout << "Enter colour: ";
    std::cin >> c;
    rectangle b(l, w, c);
    if (a == b)
    {
        std::cout << "\nMatching rectangles.";
    }
    else
    {
        std::cout << "\nNon-Matching rectangles.";
    }

    return 0;
}