#include<iostream>
int main()
{
    system("cls");
    int i =0;
    while (i<10)
    {
        std::cout<<"\n"<<i+1;
        i++;
    }
    i=0;
    do
    {
        std::cout<<"\n"<<i+1;
        i++;
    }while(i<10);
    
    return 0;
}