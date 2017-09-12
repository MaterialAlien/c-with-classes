// Objetosaninhados.cpp: Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include <iostream>
#include "header.h"

int main()
{
	pessoa pessoa1;

	pessoa1.get_dados();
	pessoa1.show_dados();

#if WIN32
	system("PAUSE");
#endif
	return 0;
}



