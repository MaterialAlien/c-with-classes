// Dado uma um valor minimo e maximo para uma faixa de valores, calcular f(x)
//pra valores nessa faixa. Se a função retornar valores complexos, pedir novo minimo e maximo

#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

main()
{
    int min,max,cont;

    cout<< "\nf(x)=sqrt(x^2-4)";
    cout<<"\nDigite o valor minimo do intervalo: ";
    cin>> min;
    cout<< "\nDigite o valor maximo do intervalo: ";
    cin>>max;

    for(cont=min;cont<=max;cont++)
        if(cont<=-2 || cont>=2)
            cout<< "x: "<<setw(10)<<cont<<"\tf(x): "<<setw(10)<<sqrt(cont*cont-4)<<endl;
}
