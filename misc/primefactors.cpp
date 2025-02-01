#include<iostream>
#include<vector>
class primefactors
{
    public:
    primefactors(int n);
    std::vector<int> primfaclist;
    void primfac(int n);
};
int main()
{
    std::cout<<"Enter an Integer.\n";
    int num;
    std::cin>>num;
    primefactors obj(num);
    return 0;
}
primefactors::primefactors(int n)
{
    primefactors::primfaclist.clear();
    primefactors::primfac(n);
    std::cout<<"Prime Factors are:\n";
    std::cout<<n<<" = ";
    for(auto &a : primefactors::primfaclist)
    {
        std::cout<<a<<" "<<"X"<<" ";
    }
    std::cout<<"1";
}
void primefactors::primfac(int n)
{
    for (int i = 2; i<=n; i++)
    {
        if(n%i==0)
        {
            primefactors::primfaclist.push_back(i);
            primefactors::primfac(n/i);
            break;
        }
    }

}
