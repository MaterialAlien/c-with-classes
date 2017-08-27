// Ponteiros.cpp: Define o ponto de entrada para a aplicação de console.
//

// Ponteirosesobrecarga.cpp: Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
/ Exemplo de uso de funções com argumentos passados por referencia
#include <iostream>
#include <string>
using namespace std;


void referencia2(int *valor1, int *valor2)
{
	cout << "\nValor1: ";
	cin >> valor1;

	cout << "\nValor2: ";
	cin >> valor2;
}


main()
{
	int valor1, valor2;

	cout << "\nValor1: ";
	cin >> valor1;

	cout << "\nValor2: ";
	cin >> valor2;

	cout << "\nValor1: " << valor1 << "\tValor2: " << valor2 << endl;
	//referencia(valor1, valor2);
	//cout << "\nValor1: " << valor1 << "\tValor2: " << valor2 << endl;
	referencia2(&valor1, &valor2);
	cout << "\nValor1: " << valor1 << "\tValor2: " << valor2 << endl;

#if defined(_MSC_VER)
	system("PUASE");
#endif

	return 0;
}


