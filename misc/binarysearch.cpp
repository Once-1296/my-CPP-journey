#include <iostream>
using namespace std;
int check_prime(int num){
    if(num == 0||num == 1){
        return 0;
    }
    for(int i=2;i<num;i++){
if (num%i==0){
    return 0;
}
    }
return 1;
    }
void binsearch(int N,int size, int arr[])
{

    int beg = 0, end = size - 1;
    int mid;
    if(N<arr[beg]||N>arr[end]){
        cout<< "element not in list";
    }
    for (int i = 0; i < size; i++)
    {
        mid = (beg + end) / 2;
        if (N == arr[mid])
        {
            break;
        }
        else if (N > arr[mid])
        {
        beg = mid + 1;
        continue;
        }
        else if(N<arr[mid]){
            end = mid - 1;
            continue;
        }
        if (i == size - 1){
            cout<<"Element not found in list: ";
        }
    }
    if (N==arr[mid])
{
    cout<<N<<" is the "<<mid +1 <<" no element of given array";
}    
}
int main()
{
    int arr[100];
    for(int i=0;i<100;i++){
     arr[i]=i+1;
      
    }
    int num,size;
    size = sizeof(arr)/sizeof(int);
    cout<<"Enter integer: ";
    cin>>num;
binsearch(num,size,arr);
// for(int i= 0;i<size;i++){
//     cout<<arr[i];
// }
    return 0;
}