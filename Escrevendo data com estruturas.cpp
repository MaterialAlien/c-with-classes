#include <iostream>
#include <iomanip>
using namespace std;

struct data
{
    int dia,mes,ano;
};

typedef struct data data;


main()
{
    data data1;
    cout<<"\nDigite o ano: ";
    cin>>data1.ano;

    do
    {
        cout<<"\nDigite o mes: ";
        cin>>data1.mes;
    }while(data1.mes<1 || data1.mes>12);

    do
    {
        cout<<"\nDigite o dia: ";
        cin>>data1.dia;
    }while(data1.dia<1 || data1.dia>30);

    cout<<"Data: "<<data1.dia<<"/"<<data1.mes<<"/"<<data1.ano<<endl;
}
