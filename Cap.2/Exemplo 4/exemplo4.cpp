// Programa de adi��o que exibe a soma de dois n�meros.

#include<iostream> // permite ao programa realizar entradas e sa�das

// a fun��o main inicia a execu��o do programa
int main()
{
	//declara��es de vari�vel
	int number1;  // primeiro inteiro a adicionar
	int number2;  // segundo inteiro a adicionar
	int sum;      // soma de number1 e number2

	std::cout << "Enter first integer: "; // solicita dados ao usu�rio
	std::cin >> number1; // l� primeiro inteiro inserido pelo usu�rio em number1

	std::cout << "Enter second integer: "; // solicita dados ao usu�rio
	std::cin >> number2; // l� segundo inteiro inserido pelo usu�rio em number2

	sum = number1 + number2; // adiciona n�meros; armazena resultado em sum


	std::cout << "Sum is " << sum << std::endl; // exibe sum; temrina a linha

	return 0;

}
