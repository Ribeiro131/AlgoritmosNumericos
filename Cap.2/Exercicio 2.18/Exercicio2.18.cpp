// Exercício 1.18
#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main()
{
   int num1,num2; // declaration
   cout << "Enter two integers: "; // prompt
   cin >> num1 >> num2;            // input to numbers

   if (num1 == num2)
   cout << "These numbers are equal." << endl;

   if (num1 > num2)
   cout << num1 << " is larger." << endl;

   if (num2 > num1)
   cout << num2 << " is larger." << endl;

   return 0;


 
}

