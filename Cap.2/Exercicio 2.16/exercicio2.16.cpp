// Exercício 2.16 
#include<iostream>

using std::cout;
using std::endl;
using std::cin;

int main()
{
	int num1,num2; // declare variables

	cout << "Enter two integers: "; // prompt user
	cin >> num1 >> num2; // read values from keyboard

	//output the results
	cout << "The sum is " << num1 + num2
	     << "\nThe product is " << num1*num2
	     << "\nThe difference is " << num1 - num2
	     << "\nThe quotient is " << num1/num2 << endl;

	     return 0;  // indicate sucessful termination
}
