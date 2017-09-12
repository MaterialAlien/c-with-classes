// Salario.cpp: Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include "interface.h"
#include <iostream>


int main()
{
	salario salario1,
			salario2;



	salario1.setEmpregado();
	salario2.setEmpregado();

	salario1.showEmpregado();
	salario2.showEmpregado();

//#if WIN32
	//system("PAUSE");
//#endif
    return 0;
}

