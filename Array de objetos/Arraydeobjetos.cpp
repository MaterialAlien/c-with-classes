// Arraydeobjetos.cpp: Define o ponto de entrada para a aplicação de console.
//Treinar implementação de arrays de objetos
//O progrma irá pedir nome, signo e idade a cada iteração. Pra terminar a entrada de dados, basta digitar 1
//No fim irá listar as entradas
#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;
#define TAMPESSOAS 4
class pessoa
{
private:
	string nome,signo;
	int idade;
public:
	void mostra_dados();
	void pega_dados();
};
void mostra_dados2(pessoa *pessoas, int cont)
{
	int cont2;

	for (cont2 = 0; cont2 < cont; cont2++)
		pessoas[cont2].mostra_dados();
}
int main()
{
	pessoa pessoas[TAMPESSOAS];//Declaração de um vetor do tipo pessoa
	int cont=0;
	char continuar;
	cout << "\nContinuar a pegar dados? 1 para sim: ";
	cin >> continuar;
	while (continuar == '1')
	{
		pessoas[cont].pega_dados();
		cont++;
		cout << "\nContinuar a pegar dados? 1 para sim: ";
		cin >> continuar;
	}
	mostra_dados2(pessoas, cont);
#if WIN32//Só será executado se o SO for windows
	system("PAUSE");
#endif
	return 0;
}
void pessoa::pega_dados()
{
	cout << "\nNome: ";
	cin >> nome;
	cout << "\nSigno: ";
	cin >> signo;
	cout << "\nIdade: ";
	cin >> idade;
}
void pessoa::mostra_dados()
{
	cout << "\nNome: " << nome << "\nIdade: " << idade << "\nSigno: " << signo << endl << endl;
}

