// Friends.cpp: Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include <iostream>
#include "interface.h"

int main()
{
	numero numero1;

	print(numero1, 2);

#if WIN32
	system("PAUSE");
#endif

	return 0;
}

