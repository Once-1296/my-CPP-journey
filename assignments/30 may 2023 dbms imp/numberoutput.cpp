#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;
int main(){
    fstream file("numbers.csv",ios::out);
       srand(time(0));
   for(int i=0;i<100;i++){
 file<<(rand() % (500 - 1 + 1))+1<<endl;
   }
    file.close();
 return 0;
}