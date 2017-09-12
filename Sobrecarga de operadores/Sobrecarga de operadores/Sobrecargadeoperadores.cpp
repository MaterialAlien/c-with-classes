// Sobrecargadeoperadores.cpp: Define o ponto de entrada para a aplicação de console.
//Sobrecarregar o operador para * para que a operação string * x faça a concatenação da string nela mesma x vezes
#include "stdafx.h"
#include <iostream>
#include "interface.h"
using namespace std;

int main()
{
	palavra word1;//a palavra a ser concatenada com ela mesma
	int numero;// a quantidade de vezes em que vai ocrrer a concatenação

	word1.get_word();

	cout << "\nDigite a quabtidade de vezes que vc quer concatenar a palavra " << word1.show_word() << " com ela mesma: ";
	cin >> numero;

	cout << "\nA palavra " << word1.show_word() << " concatenada " << numero << " vezes com ela mesma: " << word1*numero << endl;

#if WIN32
	system("PAUSE");
#endif
	return 0;
}
