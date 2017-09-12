#include "stdafx.h"
#include "header.h"
#include <iostream>

conta::conta()
{
	saldo = 0;
}

void conta::show_conta() const
{
	cout << "\nSaldo: R$ " << saldo << endl;
}

void conta::deposito_inicial()
{
	float deposito;

	cout << "\nDigita a quantidade a ser depositada: R$ ";
	cin >> deposito;
	saldo += deposito;
}

void nome::get_nome()
{
	cout << "\nDigite o nome do cliente: ";
	getline(cin, nome_pessoa);
	cout << "\nDigite o sobrenome do cliente: ";
	getline(cin, sobrenome);
}

void nome::show_nome() const
{
	cout << "\nNome: " << nome_pessoa << " " << sobrenome;
}

void pessoa::get_dados()
{
	nome_sobrenome.get_nome();
	conta_pessoa.deposito_inicial();
}

void pessoa::show_dados() const
{
	nome_sobrenome.show_nome();
	conta_pessoa.show_conta();
}