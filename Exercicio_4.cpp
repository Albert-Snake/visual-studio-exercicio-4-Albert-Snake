// Exercicio_4.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
using namespace std;

int main()
{
	cout << "\nInsira o primeiro numero: ";
	int num1{};
	cin >> num1;

	cout << "\nInsira o segundo numero: ";
	int num2{};
	cin >> num2;

	int escolha{};
	cout << "\nSe pretender somar introduza (1), se pretender multiplicar insira (2): "
	cin >> escolha

		if (escolha == 1) {
			cout << "\nO resultado: " << num1 + num2 << "." << endl;
		}
		else if (escolha == 2) {
			cout << "\nO resultado: " << num1 * num2 << "." << endl;
		}
		else
			cout << "Opcao invalida."
}

