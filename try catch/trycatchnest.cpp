#include <iostream>
#include<conio.h>

using namespace std;

int main() {
   int var = 0;

   cout << "Simple C++ Program for Nested Exception Handling\n";
   // try block - for exception code
   try {
      // Inside try block
      // Nested try Block
      try {
         throw var;
      }      // Nested catch block
      catch (int ex) {
         // Code executed when exception Catch : for nested exception
         cout << "Nested Exception Catch : Value :" << ex;
      }
   } catch (...) {
      // Code executed when exception Catch : for default
      cout << "Default Exception Catch";
   }
   getch();
   return 0;
}