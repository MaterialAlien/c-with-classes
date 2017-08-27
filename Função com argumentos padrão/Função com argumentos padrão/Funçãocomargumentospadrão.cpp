// Funçãocomargumentospadrão.cpp: Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void funcao_padrao(int x = 10)
{
	cout << x;
}


int main()
{
	funcao_padrao();
	cout << endl;
	funcao_padrao(20);
	getchar();
	return 0;
}

