#include <iostream>
using namespace std;
class Area
{
private:
    int radius, length, breadth, height, side, base;

public:
    Area(int r, int l, int b, int s, int h, int bs);
    Area(Area *object);
    void getcirclearea();
    void getsquarerea();
    void getrectanglearea();
    void gettrianglearea();
};
Area ::Area(int r, int l, int b, int s, int h, int bs)
{
    radius = r;
    length = l;
    breadth = b;
    height = h;
    side = s;
    base = bs;
}
Area ::Area(Area *object)
{
    this->radius = object->radius;
    this->length = object->length;
    this->breadth = object->breadth;
    this->height = object->height;
    this->side = object->side;
    this->base = object->base;
}
void Area ::getcirclearea()
{
    float area = 3.14 * radius * radius;
    cout << "Area of circle with radius " << radius << " is "
         << area << endl;
}
void Area ::getsquarerea()
{
    float area = side * side;
    cout << "Area of square with side " << side << " is " << area << endl;
}
void Area ::getrectanglearea()
{
    float area = length * breadth;
    cout << "Area of rectangle with length " << length << " and breadth " << breadth << " is " << area << endl;
}
void Area ::gettrianglearea()
{
    float area = 0.5 * base * height;
    cout << "Area of triangle with height " << height << " and base " << base << " is " << area << endl;
}
int main()
{
    system("cls");
    int radius, base, length, height, side, breadth;
    cout << "Enter the radius:";
    cin >> radius;
    cout << "Enter the length and breadth of the rectangle: ";
    cin >> length >> breadth;
    cout << "Enter the side of the square: ";
    cin >> side;
    cout << "Enter the height and base: ";
    cin >> height >> base;
    system("cls");
    Area obj(radius, length, breadth, side, height, base);
    Area copy(&obj);
    copy.getcirclearea();
    copy.getsquarerea();
    copy.getrectanglearea();
    copy.gettrianglearea();
    return 0;
}