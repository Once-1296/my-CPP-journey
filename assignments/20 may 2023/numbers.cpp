#include <iostream>
#include <fstream>
#include <string>
#include <math.h>
#include <vector>
using namespace std;
int main()
{
    ifstream file("numbers.txt");
    vector<int>arrnum;
    int a = 0;
    string number;
    while (getline(file, number))
    {
        a++;
        arrnum.push_back(stoi(number));
    }
    file.close();
    int sum = 0;
    double avg, variance, sd;
    int numlines = a;
    vector<double> arrdevs;
    double devsum = 0.0;
    for (int i = 0; i < numlines; i++)
    {
        sum += arrnum[i];
    }
    avg = double(sum) / numlines;
    for (int i = 0; i < numlines; i++)
    {
        arrdevs.push_back((arrnum[i] * arrnum[i]) - (avg * avg));
    }
    for (int i = 0; i < numlines; i++)
    {
        devsum += arrdevs[i];
    }
    variance = devsum / numlines;
    sd = sqrt(variance);
    double cv = (sd / avg) * 100;
    system("cls");
    cout << "Sum of the random " << numlines << " numbers is: " << sum << endl;
    cout << "Average: " << avg << endl;
    cout << "Variance: " << variance << endl;
    cout << "Standard Deviation: " << sd << endl;
    cout << "Coefficient of Variation: " << cv << endl;
    return 0;
}