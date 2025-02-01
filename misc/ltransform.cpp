#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double arr1[3],arr2[3],arr3[3],arr4[3];
    double rho,phi,theta;
    cin>> rho>>phi>>theta;
    arr1[0] = rho * sin(phi) * cos (theta);
    arr1[1] = rho * sin(phi) * sin (theta);
    arr1[2] = rho * cos(phi);    
    cin>> rho>>phi>>theta;
    arr2[0] = rho * sin(phi) * cos (theta);
    arr2[1] = rho * sin(phi) * sin (theta);
    arr2[2] = rho * cos(phi);
    arr3[0] = arr1[0] + arr2[0];
    arr3[1] = arr1[1] + arr2[1];
    arr3[2] = arr1[2] + arr2[2];
    rho = sqrt(pow(arr3[0],2)+pow(arr3[1],2)+pow(arr3[2],2));
    phi = atan(sqrt(pow(arr3[0],2)+pow(arr3[1],2))/arr3[2]);
    theta = atan (arr3[0] / arr3[1]);
    arr3[0] = rho * sin(phi + 3.14/2) * cos (theta);
    arr3[1] = rho * sin(phi + 3.14/2) * sin (theta);
    arr3[2] = rho * cos(phi + 3.14/2);
    rho = sqrt(pow(arr2[0],2)+pow(arr2[1],2)+pow(arr2[2],2));
    phi = atan(sqrt(pow(arr2[0],2)+pow(arr2[1],2))/arr3[2]);
    theta = atan (arr2[0] / arr2[1]);
    arr2[0] = rho * sin(phi + 3.14/2) * cos (theta);
    arr2[1] = rho * sin(phi + 3.14/2) * sin (theta);
    arr2[2] = rho * cos(phi + 3.14/2);
    rho = sqrt(pow(arr1[0],2)+pow(arr1[1],2)+pow(arr1[2],2));
    phi = atan(sqrt(pow(arr1[0],2)+pow(arr1[1],2))/arr1[2]);
    theta = atan (arr1[0] / arr1[1]);
    arr1[0] = rho * sin(phi + 3.14/2) * cos (theta);
    arr1[1] = rho * sin(phi + 3.14/2) * sin (theta);
    arr1[2] = rho * cos(phi + 3.14/2);
    arr4[0] = arr1[0] + arr2[0];
    arr4[1] = arr1[1] + arr2[1];
    arr4[2] = arr1[2] + arr2[2];
    cout<<arr3[0]<<endl<<arr3[1]<<endl<<arr3[2]<<endl;
    cout<<arr4[0]<<endl<<arr4[1]<<endl<<arr4[2]<<endl;
}