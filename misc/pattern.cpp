
#include <iostream>
using namespace std;

int main()
{ // declaration of variables
    int x, y;
    for (x = 1; x <= 9; x++)

    {
        if (x % 2 == 0)
        {
            continue;
        }
        for (y = 1; y <= x; y++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (x = 9; x > 0; x--)

    {
        if (x % 2 == 0)
        {
            continue;
        }
        for (y = 0; y < x; y++)
        {
            cout << "*";
        }
        cout << endl;
    }

    system("pause");
    return 0;
}