//Implmentação básica de uma classe
#include <iostream>
using namespace std;

class estoque_celular
{
private:
    int codigo_fabricante,codigo_modelo;
    float custo;
public:
    void set_dados()
    {
        cout<<"\nFabricante: ";
        cin>>codigo_fabricante;
        cout<<"Modelo: ";
        cin>>codigo_modelo;
        cout<<"Custo: ";
        cin>>custo;
    }

    void mostra_dados()
    {
        cout<<"\nFabricante: "<<codigo_fabricante<<endl;
        cout<<"Modelo: "<<codigo_modelo<<endl;
        cout<<"Custo: "<<custo<<endl;
    }
};

main()
{
    estoque_celular celular1,celular2;

    celular1.set_dados();
    celular2.set_dados();
    celular1.mostra_dados();
    celular2.mostra_dados();
}
