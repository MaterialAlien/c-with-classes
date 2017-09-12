#include "stdafx.h"
#include "interface.h"
#include <iostream>

string palavra::operator*(const int &numero)
{
	string word2 = word;
	int cont;

	for (cont = 1; cont < numero; cont++)
		word2 += word;

	return word2;
}

void palavra::get_word()
{
	cout << "Digite a palavra a ser concatenada com ela mesma: ";
	getline(cin, word);
}

string palavra::show_word() const
{
	return word;
}
