// Exercício 2.19 solution

#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main()
{
	int num1,num2,num3,smallest,largest; // declaration

	cout << "Input three different integers : "; // prompt
	cin >> num1 >> num2 >> num3 ;

	largest = num1; // Asssume first number is largest

	if (num2 > largest) // is num2 larger?
	largest = num2;

	if (num3 > largest) // is num3 larger?
	largest = num3;

	smallest = num1;    // assume first number is smallest

	if (num2 < smallest)
	smallest = num2;

	if (num3 > smallest)
	smallest = num3;

	cout << "Sum is " << num1 + num2 + num3
	     << "\nAverage is " << (num1+num2+num3)/3
	     << "\nProduct is " << num1*num2*num3
	     << "\nSmallest is " << smallest
	     << "\nLargest is " << largest << endl;

	     return 0;
}

