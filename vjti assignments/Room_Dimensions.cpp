#include<iostream>
#include<vector>
using namespace std;
class ROOM
{
    public:
    double lengthinx;
    double lengthiny;
    double lengthinz;
    vector<double> calc_area(bool a);
    double calc_sarea();
    double calc_vol();
};
vector<double> ROOM :: calc_area(bool a)
{
    if(a)
    {
    cout<<"Area in X-Y plane:(floor/ceiling) "<<lengthinx*lengthiny<<endl;
    cout<<"Area in Y-Z plane:(walls) "<<lengthiny*lengthinz<<endl;
    cout<<"Area in X-Z plane:(walls) "<<lengthinx*lengthinz<<endl;
    }
    vector<double> arr;
    arr.push_back(lengthinx*lengthiny);
    arr.push_back(lengthiny*lengthinz);
    arr.push_back(lengthinx*lengthinz);
    return arr;
}
double ROOM :: calc_sarea()
{
    vector<double> arr = calc_area(false);
    double sum = 0;
    for(auto &a: arr)
    {
        sum += 2*a;
    }
    cout<<"Surface area "<<sum<<endl;
    return sum;
}
double ROOM::calc_vol()
{
    cout<<"Volume "<<lengthinx*lengthiny*lengthinz<<endl;
    return lengthinx*lengthiny*lengthinz;
}
int main()
{
    double lx1,ly1,lz1,lx2,ly2,lz2;
    ROOM room1,room2;
    cout<<"Enter room 1 length,breadth,height: ";
    cin>>lx1>>ly1>>lz1;    
    cout<<"Enter room 2 length,breadth,height: ";
    cin>>lx2>>ly2>>lz2;
    room1.lengthinx = lx1;
    room1.lengthiny = ly1;
    room1.lengthinz = lz1;
    room2.lengthinx = lx2;
    room2.lengthiny = ly2;
    room2.lengthinz = lz2;
    vector<double> arr1  = room1.calc_area(true);
    vector<double> arr2 = room2.calc_area(true);
    double s1 = room1.calc_sarea();
    double s2 = room2.calc_sarea();
    double v1 = room1.calc_vol();
    double v2 = room2.calc_vol();
    for (int i = 0; i < 3; i++)
    {
        switch (i)
        {
        case 0:
            if(arr1[i]>arr2[i])
            {
                cout<<"room1 has larger floor and ceiling\n";
            }
            else if (arr1[i]<arr2[i])
            {
                cout<<"room2 has larger floor and ceiling\n";
            }
            else
            {
                cout<<"room1 and room2 have floor and ceiling of same dimensions\n";
            }
            break;
        case 1:
            if(arr1[i]>arr2[i])
            {
                cout<<"room1 has larger walls in Y-Z plane\n";
            }
            else if (arr1[i]<arr2[i])
            {
                cout<<"room2 has larger walls in Y-Z plane\n";
            }
            else
            {
                cout<<"room1 and room2 have walls in Y-Z plane of same dimensions\n";
            }
            break;   
        case 2:
            if(arr1[i]>arr2[i])
            {
                cout<<"room1 has larger walls in X-Z plane\n";
            }
            else if (arr1[i]<arr2[i])
            {
                cout<<"room2 has larger walls in X-Z plane\n";
            }
            else
            {
                cout<<"room1 and room2 have walls in X-Z plane of same dimensions\n";
            }
            break;    
        default:
            break;
        }
    }
    if(s1>s2)
    {
        cout<<"room1 has larger surface area\n";
    }   
    else if(s2>s1)
    {
        cout<<"room2 has larger surface area\n";
    }    
    else
    {
        cout<<"room1 and room2 have same surface area\n";
    }    
    if(v1>v2)
    {
        cout<<"room1 has larger space(volume)\n";
    }   
    else if(v2>v1)
    {
        cout<<"room2 has larger space(volume)\n";
    }    
    else
    {
        cout<<"room1 and room2 have same space(volume)\n";
    }
    
}