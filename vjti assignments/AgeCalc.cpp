#include<iostream>
#include<ctime>
#include<vector>
#include<string>
using namespace std;
bool leap_year(int n)
{
    if(n%400 == 0) return true;
    if(n%100 == 0) return false;
    if(n%4 == 0) return true;
    return false;
}
bool check_if_valid_date(int d,int m,int y)
{
    if(y>2024||y<1800)return false;
    if (leap_year(y))
    {
        if(m>12 || m<1)return false;
        else if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12 )
        {
            if(d>31 || d<1)return false;
        }        
        else if (m == 4 || m == 6 || m == 9 || m == 11 )
        {
            if(d>30 || d< 1)return false;
        }  
        else
        {
            if(d>29||d<1)return false;
        }   
    }
    else
    {
        if(m>12 || m<1)return false;
        else if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12 )
        {
            if(d>31 || d<1)return false;
        }        
        else if (m == 4 || m == 6 || m == 9 || m == 11 )
        {
            if(d>30 || d< 1)return false;
        }  
        else
        {
            if(d>28||d<1)return false;
        }
    }
    return true;
    
}
void calc_age(int bd,int bm,int by,int cd,int cm, int cy)
{
    int years = cy - by - 1;
    int feb = leap_year(by)?29:28;
    int montharr[12] = {31,feb,31,30,31,30,31,31,30,31,30,31};
    int months, days;
    if(cm>bm)
    {
        years++;
        months = cm - bm;
        if(cd>=bd)
        {
            days = cd - bd;
        }
        else
        {
            months--;
            days = cd + montharr[bm - 1] - bd;
        }
    }
    else if(cm == bm)
    {
        if(cd>=bd)
        {
            years++;
            months = 0;
            days = cd - bd;
        }
        else
        {
            months = 11;
            days = cd + montharr[bm - 1] - bd;
        }
    }
    else
    {
        months = 12 - bm + cm;
        if(cd>=bd)
        {
            days = cd - bd;
        }
        else
        {
            months--;
            days = cd + montharr[bm - 1] - bd;
        }
    }
    cout<<"\nYou are "<<years<<" years old, "<<months<<" months old and "<<days<<" days old.\n";
}
class Person
{
public:
string fname,lname;
char gender;
int age;
int birth_date[3];
int cd,cm,cy;
void retdate(string s)
{
    string months[12] = {"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
    string s1 = {s[0],s[1],s[2]} ;
    for (int i = 0; i < 12; i++)
    {
        if(s1 == months[i])
        {
            cm = i + 1;
            break;
        }
    }
    
    string s2 = {s[4],s[5]};
    cd = stoi(s2);
    string s3 = { s[7], s[8], s[9], s[10]};
    cy = stoi(s3);
}
void introduce()
{
    cout<<"\nHello "<<fname<<" "<<lname<<"."<<endl;
    if (gender == 'm')
    {
        cout<<"You're handsome.\n";
    }    
    else if(gender == 'f')
    {
        cout<<"You're beautiful.\n";
    }    
    else
    {
        cout<<"You're fabulous.\n";
    }
    cout<<"Your age is "<<age<<" years.\n";
    cout<<"Your birthdate is "<<birth_date[0]<<"-"<<birth_date[1]<<"-"<<birth_date[2]<<".\n";
    cout<<" Today is "<<__DATE__<<endl;
    retdate(__DATE__);    
    calc_age(birth_date[0],birth_date[1],birth_date[2],cd,cm,cy);
}
};
int main()
{
    Person person;
    bool b = true;
        cout<<"Enter first and last name: ";
        cin>>person.fname>>person.lname;
        cout<<"Enter age: ";
        cin>>person.age;
        cout<<"Enter birth date and gender correctly:\n ";
        cout<<"Date Format: \n";
        cout<<"dd/mm/yyyy\n";
        cout<<"dd -> [1,31]\n";
        cout<<"mm -> [1,12]\n";
        cout<<"yyyy -> [1800,2024]\n";
        cout<<"Gender: m-> male, f-> female p-> prefer not to say:\n";
    do
    {
        system ("cls");
        cout<<"Enter first and last name: ";
        cout<<person.fname<<endl<<person.lname<<endl;
        cout<<"Enter age: ";
        cout<<person.age<<endl;
        cout<<"Enter birth date and gender correctly:\n ";
        cout<<"Date Format: \n";
        cout<<"dd/mm/yyyy\n";
        cout<<"dd -> [1,31]\n";
        cout<<"mm -> [1,12]\n";
        cout<<"yyyy -> [1800,2024]\n";
        cout<<"Gender: m-> male, f-> female p-> prefer not to say:\n";
        cin>>person.birth_date[0]>>person.birth_date[1]>>person.birth_date[2];
        cin>>person.gender;
        bool c = false;
        if(person.gender == 'm' ||person.gender == 'f' ||person.gender == 'p') c = true;
        b = !(check_if_valid_date(person.birth_date[0],person.birth_date[1],person.birth_date[2])&&c);
    }while(b);
    person.introduce();
    return 0;
}
