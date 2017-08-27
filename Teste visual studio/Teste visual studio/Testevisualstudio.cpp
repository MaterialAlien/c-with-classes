// Testevisualstudio.cpp: Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
#define TRUE 1
#define FALSE 0

class conta
{
private:
	float saldo;
public:
	void conta()
	{
		saldo = 0;
	}
	void mostrar_saldo()
	{
		cout << saldo << "R$\n";
	}
	void saque()
	{
		float saque;
		cout << "Digite a quantidade que voce quer sacar: \n";
		cin >> saque;
		saldo -= saque;
	}
	void deposito()
	{
		float deposito;
		cout << " Digite a quantidade que voce quer sacar: \n";
		cin >> deposito;
		saldo += deposito;
	}	
};

int main()
{
	conta conta1;
	int continuar = TRUE;

	cout << "1 - Saldo || 2 - Saque || 3 - Deposito  || Default - Sair \nDigite sua opcao: ";
	do
	{
		switch (getche())
		{
		case 1: conta1.mostrar_saldo(); break;
		case 2: conta1.saque(); break;
		case 3: conta1.deposito(); break;
		default: continuar = FALSE;
		}
	} while (continuar);

}

