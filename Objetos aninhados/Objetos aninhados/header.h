#pragma once
#include <string>
#include <iostream>
using namespace std;
class conta
{
private:
	float saldo;
public:
	conta();
	void show_conta() const;
	void deposito_inicial();
};
class nome
{
private:
	string nome_pessoa;
	string sobrenome;
public:
	void get_nome();
	void show_nome() const;
};
class pessoa
{
private:
	nome nome_sobrenome;
	int idade;
	conta conta_pessoa;
public:
	void get_dados();
	void show_dados() const;
};
