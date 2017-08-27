//Exemplo de uso de funções com argumentos passados por referencia
#include <iostream>
#include <string>
using namespace std;
void referencia(int& valor1,int& valor2)
{
    cout<<"\nValor1: ";
    cin>>valor1;

    cout<<"\nValor2: ";
    cin>>valor2;
}


main()
{
    int valor1, valor2;

    cout<<"\nValor1: ";
    cin>>valor1;

    cout<<"\nValor2: ";
    cin>>valor2;

    cout<<"\nValor1: "<<valor1<<"\tValor2: "<<valor2<<endl;
    referencia(valor1,valor2);
    cout<<"\nValor1: "<<valor1<<"\tValor2: "<<valor2<<endl;

#if defined(_MSC_VER)
	system("PUASE");
#endif

	return 0;
}
