#include<iostream>
#include<ctime>
#include<cmath>
#include<string>
using namespace std;
class someClass
{
public:
void class_func()
{
    cout<<"hello. keep coding"<<endl;
    cout<<random()<<endl;
    cout<<randomf()<<endl;
    cout<<randoms()<<endl;
}
int random()
{
    int i = (-pow(2,31) + 1) * -1;
    return rand() % i;
}
float randomf()
{
    return (float(rand() % 65535) +1)/float((rand() % 65535) +1);
}
string randoms()
{
    string s = " ";
    char arr[10];
    for (int i = 0; i < 10; i++)
    {
        int t = rand() %2;
        switch (t)
        {
        case 0:
        arr[i] = (rand() % 10)+ '0';
            break;        
        case 1:
        arr[i] = (rand() % 26)+ 'a';
            break;        
        case 2:
        arr[i] = (rand() % 26)+ 'A';
            break;
        
        default:
            break;
        }
    }
    s =arr;
    return s;
}
};
int main()
{
    srand(time(0));
    someClass obj1,obj2;
    cout<<"object 1\n";
    obj1.class_func();
    cout<<"object 2\n";
    obj2.class_func();
    return 0;
}