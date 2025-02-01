#include <iostream>
using namespace std;
int main()
{
    int arr[10];
    cout << "Enter 10 numbers: ";
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }
    cout << "Before sorting: " << endl;
    for (int k = 0; k < 10; k++)
    {
        cout << arr[k] << " , ";
    }
    for (int i = 9; i >= 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int a = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = a;
            }
            else
                continue;
        }
    }
    cout << endl<<"After sorting: " << endl;
    for (int k = 0; k < 10; k++)
    {
        cout << arr[k] << " , ";
    }
    return 0;
}