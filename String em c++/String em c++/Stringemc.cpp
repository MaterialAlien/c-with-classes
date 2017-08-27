// Stringemc.cpp: Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include <stdlib.h>
#include<iostream>
#include<string>
using namespace std;


int main()
{
	string frase;
	

	cout << "Digite uma frase: ";
	getline(cin, frase);
	cout << frase<<endl;

#if defined(_MSC_VER)
	// estas linhas serão executadas apenas quando o programa
	// for compilado por alguma versão do Microsoft Visual C
	system("pause");
#endif
	return 0;
}

