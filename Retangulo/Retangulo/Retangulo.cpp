// Retangulo.cpp: Define o ponto de entrada para a aplicação de console.
//
//Calcular a area de um retangulo
#include "stdafx.h"
#include <iostream>
#include "header.h"

int main()
{
	retangulo ret1, ret2;
	float largura, comprimento;
	
	cout << "\nDigite o comprimento do primeiro retangulo: ";
	cin >> comprimento;
	cout << "\nDigite a largura do primeiro retangulo: ";
	cin >> largura;

	ret1.atribuir(largura, comprimento);
	cout << endl << "Area: " << ret1.getArea();

	cout << "\n\nDigite o comprimento do segundo retangulo: ";
	cin >> comprimento;
	cout << "\nDigite a largura do segundo retangulo: ";
	cin >> largura;

	ret2.atribuir(largura, comprimento);
	cout << endl << "Area: " << ret2.getArea() << endl << endl;

#if WIN32
	system("PAUSE");
#endif
	return 0;
}