// Comparando inteiros utilizando instru��es if,operadores relacionais
// e operadores de igualdade

#include<iostream> // permite ao programa realizar a entrada e sa�da

using std::cout; // o programa utiliza cout
using std::cin;  // o programa utiliza cin
using std::endl; // o programa utiliza endl

// a fun��o main inicia a execu��o do programa
int main()
{
	int number1; // primeiro inteiro a comparar
	int number2; // segundo inteiro a comparar

	cout << "Enter two integers to compare: "; // solicita dados ao usu�rio
	cin >> number1 >> number2; // l� dois inteiros fornecidos pelo usu�rio

	if (number1 == number2)   cout << number1 << " == " << number2 << endl;

	if (number1 != number2)   cout << number1 << " != " << number2 << endl;

	if (number1 < number2)    cout << number1 << " < " << number2 << endl;

	if (number1 > number2)    cout << number1 << " > " << number2 << endl;

	if ( number1 <= number2)  cout << number1 << " <= " << number2 << endl;

	if (number1 >= number2)   cout << number1 << " >= " << number2 << endl;

	return 0;  // indica que o programa terminou com sucesso 

}
