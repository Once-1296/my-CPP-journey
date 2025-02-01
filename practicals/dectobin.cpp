#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<sstream>
using namespace std;
class dectobin
{
private:
string word = "";
int decnum;
public:
dectobin(int n)
{
    decnum=n;
    binnum(decnum);
    cout<<"\n binary number is : "<<revstring(word)<<endl;
}
void binnum(int num);
string revstring(string words);
};
void dectobin::binnum(int num)
{
    int temp = num;
    for(int i = 1 ; i!=temp; i+=0)
    { 
    if (num%2==0)
    {
        word+="0";
        num/=2;
        temp = num;
        continue;
    }
    if (num%2!=0)
    {
        word+="1";
        num-=1;
        num/=2;
        temp = num;
        continue;
    }
    }
    word+="1";
}
string dectobin ::revstring(string words)
{
    reverse(words.begin(),words.end());
    return words;
    
}
int main()
{
    system("cls");
    int dec;
    cout<<"Enter integer\n";
    cin>>dec;
    dectobin obj(dec);
    return 0;
}
