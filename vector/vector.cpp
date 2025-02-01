#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> object;
    object.push_back(65);
    object.push_back(43);
    object.push_back(31);
    cout<<object[0]<<endl;
    cout<<object.size()<<endl;
    object.pop_back();
    cout<<object.size();
    return 0;
}