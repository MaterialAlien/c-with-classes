// ContadorJogo.cpp: Define o ponto de entrada para a aplicação de console.
//

//Dado static. Contador de jogadores do tipo static int

#include "stdafx.h"
#include <iostream>
using namespace std;

class contadorJogo
{
private:
	static int contador;
public:
	contadorJogo()
	{
		contador++;//Toda vez que um objeto do tipo contadorJogo for criado, um contador será incrementado automaticamente
	}
	int getContador()
	{
		return contador;
	}
};

int contadorJogo::contador=0;//Aqui o contador é inicializado com 0. Uma variavel static deve ser inicializada fora da criação da classe

int main()
{
	contadorJogo contador1;
	cout << "Criando 1 objeto...\nContador: "<<contador1.getContador()<<endl;
	contadorJogo contador2;
	cout << "Criando 1 objeto...\nContador: "<< contador2.getContador() << endl;
	contadorJogo contador3,contador4;
	cout << "Criando 2 objetos...\nContador: "<< contador3.getContador() << endl;

#if WIN32
	system("PAUSE");
#endif
	return 0;
}

