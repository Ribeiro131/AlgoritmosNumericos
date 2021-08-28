// Exercício 2.24 solution

#include<iostream>

using std::cout;
using std::endl;
using std::cin;

int main()
{
	int num;

	cout << "Enter is a number: ";
	cin >> num;

	if (num % 2 == 0)
	cout << "The number " << num << "is even." << endl;

	if (num % 2 != 0)
	cout << "The number " << num << " is odd." << endl;

	return 0;
}
