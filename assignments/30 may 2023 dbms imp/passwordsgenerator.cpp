#include <iostream>
#include <string>
#include<fstream>
using namespace std;
string generate(int n)// n is size of the random string
{
  string res{};
  char characters[62];
  for (int i = 0; i < 10; i++)
  {
    characters[i] =  static_cast<char> (i + '0');
  }
  for (int i = 10; i < 36; i++)
  {
    characters[i] =  static_cast<char> (i + '7');
  }
  for (int i = 36; i < 62; i++)
  {
    characters[i] =  static_cast<char> (i + 61);
  }
  
  res.reserve(n);
 for (int i = 0; i < n; i++) {
        res = res + characters[rand() % 62];
 }
    return res;
}
int main()
{
  srand(time(0)); //seeding random generator 
  int n=1;
  string passwords[500];
//   while (n!=0)
//   {
//     cout << "enter the size of a random string and 0 to exit:"; cin >> n;
//     if (n > 0)
//     {
//       string res = generate(n);
//       cout << "a random string of size " << n << " is:\n"<<res<<endl; // printing random string
//         }
//   }
  for (int i = 0; i < 500; i++)
  { 
    passwords[i] = generate(10);
  }
  fstream file("passwords.csv",ios::app);
  for (int i = 0; i < 500; i++)
  {
    file<<passwords[i]<<endl;
  }
  
  file.close();

}