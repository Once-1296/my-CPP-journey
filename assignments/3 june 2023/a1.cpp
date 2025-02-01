#include <iostream>
using namespace std;
class Functions
{
private:
    int a = 0;
    double b = 7.3;
    string s = "satzcjzchksz,";

public:
    static void afunc()
    {
        cout << "Hello from static function." << endl;
    }
    inline void ifunc()
    {
        cout << "Hello from inline function." << endl;
    }
    friend void ffunction(Functions obj);
};
void ffunction(Functions obj)
{
    cout << "Hello from friend's function." << endl;
    cout << "Private variables are: " << endl
         << obj.a << " " << obj.b << " " << obj.s;
}
int main()
{
    Functions::afunc();
    Functions object;
    object.ifunc();
    object.ifunc();
    object.ifunc();
    object.ifunc();
    ffunction(object);
    return 0;
}