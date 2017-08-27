// Ponteiros2.cpp: Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void mudavalor(int *valor1, int *valor2)
{
	cout << "\nDigite o valor 1:";
	cin >> *valor1;
	cout << "Digite o valor 2: ";
	cin >> *valor2;
}

void mudavalor2(int& valor1, int &valor2)
{
	cout << "\nDigite o valor 1:";
	cin >> valor1;
	cout << "Digite o valor 2: ";
	cin >> valor2;
}

int main()
{
	int valor1, valor2;

	cout << "\nDigite o valor 1: ";
	cin >> valor1;
	cout << "Digite o valor 2: ";
	cin >> valor2;

	mudavalor(&valor1, &valor2);
	cout << endl << valor1 << endl << valor2<<endl;
	mudavalor2(valor1, valor2);
	cout << endl << valor1 << endl << valor2 << endl;

#if WIN32
	system("PAUSE");
#endif

	return 0;
}

