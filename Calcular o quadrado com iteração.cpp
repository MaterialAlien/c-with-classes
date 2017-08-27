//Calcular o quadrado de 1 ate n digitado pelo usuario
#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;
main()
{
    int valor,cont;

    cout<< "Digite o valor de n: " <<endl;
    cin>> valor;

    for(cont=1;cont<=valor;cont++)
        cout<<cont*cont<<endl;
}
