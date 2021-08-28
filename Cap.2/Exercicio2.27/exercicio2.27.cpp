// Exercício 2.27 solution
#include<iostream>

using std::cout;
using std::endl;
using std::cin;

int main()
{
	char symbol;

	cout << "Enter a character: ";
	cin>> symbol;

	cout << symbol <<"s is a integer equivalent is " << static_cast<int>(symbol) << endl;

	return 0;
}
