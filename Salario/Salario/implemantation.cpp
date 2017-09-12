#include "stdafx.h"
#include <iostream>
#include "interface.h"
using namespace std;

void salario::setEmpregado()
{
	cout << "\nDigite o nome do empregado: ";
	cin >> nome;
	
	cout << "\nDigite o salario do empregado: ";
	cin >> salario_;
}

void salario::showEmpregado()
{
	cout << "\n\nNome: " << nome << "\nSalario: R$ " << salario_<< endl << endl;
}
