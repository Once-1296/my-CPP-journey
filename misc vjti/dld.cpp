#include<iostream>
#include<string>
#include<unordered_set>
#include<set>
#include<vector>
using namespace std;
bool solve(string s)
{
    vector<vector<char>>grid;
    int a = 0;
    int t = 0;
    for(int i =0;i<4;i++)
    {
        vector<char>tmp;
        for(int j = 0;j<4;j++)
        {
            tmp.push_back(s[a]);
            if(s[a]=='T')t++;
            a++;
        }
        grid.push_back(tmp);
    }
    if(t==0||t>4)return false;
    unordered_set<int>st1,st2;
    for(int i = 0;i<4;i++)
    {
        for(int j =0;j<4;j++)
        {
            if(grid[i][j]=='T')
            {
                if(st1.find(i)!=st1.end()||st2.find(j)!=st2.end())return false;
                st1.insert(i);
                st2.insert(j);
            }
        }
    }
    return true;
}
int main()
{
    vector<string>gen;
    gen.push_back("T");
    gen.push_back("F");
    int i = 15;
    while(i--)
    {
        int a = gen.size();
        for(int j = 0;j<a;j++)
        {
            gen.push_back(gen[j]+"T");
            gen.push_back(gen[j]+"F");
        }
        gen.erase(gen.begin(),gen.begin()+a);
    }
    cout<<gen.size()<<" "<<gen[0]<<endl;
    int ct =0,cnt=1;
    for(auto&a:gen)
    {
        cout<<cnt++<<" ";
        if(solve(a))ct++;
    }
    cout<<endl<<ct;
return 0;
}