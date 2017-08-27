#include <iostream>

using namespace std;

main()
{
    int valor1,valor2;
    cout<< "Digite o primeiro numero: "<< endl;
    cin>> valor1;
    cout<<"Digite o segundo numero: "<<endl;
    cin>>valor2;

    cout<< "Soma de " << valor1 << " e " <<valor2<<": "<<valor1+valor2<<endl;
    cout<< "Subtracao de " << valor1 << " e " <<valor2<<": "<<valor1-valor2<<endl;
    cout<< "Multiplicacao de " << valor1 << " e " <<valor2<<": "<<valor1*valor2<<endl;
    cout<< "Divisao de " << valor1 << " e " <<valor2<<": "<<(float) valor1/valor2<<endl;
}
