// SobrecargaeTemplatedefunções.cpp: Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int maior(int x, int y)
{
	if(x>y)
		return x;
	else
		return y;
}

char maior(char x, char y)
{
	if (x>y)
		return x;
	else
		return y;
}

template < typename T>
T maior2(T x, T y)
{
	if (x>y)
		return x;
	else
		return y;
}


int main()
{
	cout<< maior(1, 2)<<endl;
	cout<< maior('a', 'b')<<endl;
	cout << maior2(1, 2) << endl;
	cout << maior2('a', 'b') << endl;

#if WIN32
	system("PAUSE");
#endif
	return 0;
}

