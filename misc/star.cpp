
#include<iostream>
using namespace std;

int main()
{      //declaration of variables
       int x,y;
       for(x=1;x<=7;x++)
              {
                     for(y=1;y<=x;y++)
                            {
                                  cout<<y;
                           }
                     for(;y<=7;y++)
                           {
                                  cout<<"*";
                           }
             
                          
                     cout<<endl;
              }

       system("pause");
       return 0;
}