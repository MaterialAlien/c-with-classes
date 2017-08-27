//Programa básico pra implementar uma função de soma
#include <iostream>
#include <iomanip>
using namespace std;

int soma(int valor1,int valor2)
{
    return valor1+valor2;
}


main()
{
    int valor1,valor2;

    cout<<"\nDigite o primeiro operando da soma: ";
    cin>>valor1;

    cout<<"\nDigite o segundo operando da soma: ";
    cin>>valor2;

    cout<<"\nSoma de "<<valor1<<" e " <<valor2<< ": "<<soma(valor1,valor2)<<endl;
}
