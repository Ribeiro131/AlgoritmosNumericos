// Exercício 2.20 solution

#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main()
{
	int radius; //declaration

	cout << "Enter the circle radius: "; //prompt
	cin >> radius;
	cout << "Diameter is " << radius*2.0
	     << "\nCircunference is " << 2*3.1459*radius
	     << "\nArea is " << 3.1459*radius*radius << endl;

	     return 0;
}
