#include<iostream>
using namespace std;
int main(){
    string one = "awwab";
    string two = "awwab";
    string three = one + two ;
    cout<<  three;
    cout<<endl<<one.length()<<endl<<two.length()<<endl<<three.length();
    if(one==two){
        cout<<endl<<"Condition is true"<<endl;
    }
    else
    cout<<endl<<"Condition is false";
string names[3]={"awwab","krrish","schuyler"};
for(int i=0;i<3;i++){
    cout<<names[i]<<endl;
}

    return 0;
}