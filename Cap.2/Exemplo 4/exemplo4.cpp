// Programa de adição que exibe a soma de dois números.

#include<iostream> // permite ao programa realizar entradas e saídas

// a função main inicia a execução do programa
int main()
{
	//declarações de variável
	int number1;  // primeiro inteiro a adicionar
	int number2;  // segundo inteiro a adicionar
	int sum;      // soma de number1 e number2

	std::cout << "Enter first integer: "; // solicita dados ao usuário
	std::cin >> number1; // lê primeiro inteiro inserido pelo usuário em number1

	std::cout << "Enter second integer: "; // solicita dados ao usuário
	std::cin >> number2; // lê segundo inteiro inserido pelo usuário em number2

	sum = number1 + number2; // adiciona números; armazena resultado em sum


	std::cout << "Sum is " << sum << std::endl; // exibe sum; temrina a linha

	return 0;

}
