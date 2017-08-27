#include <iostream>
using namespace std;
#define FALSE 0
#define TRUE 1

class conta
{
private:
    float saldo;
public:
    conta()
    {
        saldo=0;
    }
    deposito()
    {
        float deposito_;
        cout<<"\nDigite quanto voce quer depositar: ";
        cin>>deposito_;
        saldo=saldo+deposito_;
    }
    saque()
    {
        float saque_;
        cout<<"\nDigite quanto voce quer sacar: ";
        cin>>saque_;
        saldo=saldo-saque_;
    }
    mostrar_saldo()
    {
        cout<<"\nSaldo: R$ "<<saldo;
    }
};

main()
{
    conta conta1;
    int continuar=TRUE;
    char opcao;

    do
    {
        cout<<"\n\n1 - Saldo  |  2 - Saque  |  3 - Deposito  |  Qualquer outra tecla - Sair\nDigite sua opcao: ";
        cin>>opcao;
        switch(opcao)
        {
        case '1':
            conta1.mostrar_saldo();
            break;
        case '2':
            conta1.saque();
            break;
        case '3':
            conta1.deposito();
            break;
        default:
            continuar=FALSE;
        }
    }
        while(continuar);
    }
