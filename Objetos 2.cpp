#include <iostream>
using namespace std;
#define TRUE 1
#define FALSE 0


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
        float deposito;
        cout<<"\nDigite a quantia a ser depositada: ";
        cin>>deposito;
        saldo+=deposito;
    }
    saque()
    {
        float saque;
        cout<<"\nDigite a quantia a ser sacada: ";
        cin>>saque;
        saldo-=saque;
    }
    mostrar_saldo()
    {
        cout<<"\nSaldo: R$ "<<saldo<<endl;
    }
};

main()
{
    conta conta1;
    int opcao, continuar=TRUE;

    do
    {
        cout<<"\nOpcao 1: Deposito\nOpcao 2: Saque\nOpcao 3: Saldo\nOpcao default: Sair"<<endl;
        cout<<"\nDigite sua opcao: ";
        cin>>opcao;

        switch(opcao)
        {
            case 1:conta1.deposito();break;
            case 2:conta1.saque();break;
            case 3:conta1.mostrar_saldo();break;
            default: continuar=FALSE;
        }
    }while(continuar);
}
