//Implementação de uma função que exibe n vezes um caractere c

#include <iostream>
using namespace std;

void exibe_char(int n, char c)
{
    int cont;
    cout<<endl;
    for(cont=1;cont<=n;cont++)
        cout<<c;
    cout<<endl;
}

main()
{
    int n;
    char c;

    cout<<"Exibir um caractere 'c' 'n' vezes"<<endl;
    cout<<"Digite n: ";
    cin>>n;
    cout<<"\nDigite c: ";
    cin>>c;

    exibe_char(n,c);
}
