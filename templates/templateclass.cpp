#include<iostream>
#include<vector>
using namespace std ;
template <typename T>
void func(T arr[],int size){
cout<<"Printing array"
<<endl;
for(int i = 0;i<size;i++){
    cout<<arr[i]<<endl;
}
}
template<typename T>
class Size{
private:
int size;
public:
void showsize(T element){
    size = sizeof(element);
cout<<"Size is "<<size<<endl;
}
};

int main(){
    cout<<
    "hello world"<<endl;
//     int size;
//     cout<<"Enter size of array "<<endl;
// cin>>size;
// int arr[size];
// func(arr,size);
// string names[3] = {"Awwab","Dharmendra","Krrish"};
// cout<<"Size: "<<sizeof(names)/sizeof(string)<<endl;
// int ssize = sizeof(names)/sizeof(string);
// func(names,ssize);
Size <int> object;
object.showsize(4);
Size <double> object1;
object1.showsize(4.5);
    return 0;
}