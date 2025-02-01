#include<iostream>
using namespace std;
class Shapes{
private:
int length,breadth,height,side;
float base,radius,cheight;
public:
void getarea(int l,int b);
void getarea(int h, float b);
void getarea(int s);
void getarea(float r);
void getarea(float r,float h);
};
void Shapes :: getarea(int l,int b){
length = l;
breadth = b;
float area = length*breadth;
cout<<"Area is "<<area;
}
void Shapes :: getarea(int h,float b){
height = h;
base = b;
float area = 0.5*height*base;
cout<<"Area is "<<area;
}
void Shapes :: getarea(int s){
side = s;
float area = side * side;
cout<<"Area is "<<area;
}
void Shapes :: getarea(float r){
radius = r;
float area = 3.14 * radius * radius;
cout<<"Area is "<<area;
}
void Shapes :: getarea(float r,float h){
radius = r;
cheight = h;
float area =2 * 3.14 * radius * (cheight + radius);
cout<<"Area is "<<area;
}
int main(){
system("cls");
Shapes object;
int length,breadth,height,side;
float base,radius,cheight;
int n;
cout<<"Enter Shape no."<<endl;
cout<<"1. \t Rectangle "<<endl;
cout<<"2. \t Square "<<endl;
cout<<"3. \t Triangle "<<endl;
cout<<"4. \t Circle "<<endl;
cout<<"5. \t Cylinder"<<endl;
cin>>n;
switch (n){
    case 1:
    cout<<"Enter length and breadth: "<<endl;
    cin>>length>>breadth;
    object.getarea(length,breadth);
    break;
    case 2:
    cout<<"Enter side: "<<endl;
    cin>>side;
    object.getarea(side);
    break;
    case 3:
    cout<<"Enter base and height: "<<endl;
    cin>>base>>height;
    object.getarea(height,base);
    break;
    case 4:
    cout<<"Enter radius: "<<endl;
    cin>>radius;
    object.getarea(radius);
    break;
    case 5:
    cout<<"Enter radius and height: "<<endl;
    cin>>radius>>cheight;
    object.getarea(radius,cheight);
    break;
}
    return 0;
}