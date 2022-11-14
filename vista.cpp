#include "vista.h"

Vista::Vista()
{
    controlador=new Controlador();



}

void Vista::actualizarnota()
{
    int opc;
    int nota=0;
    do{
        cout<<"Que nota desea modificar";cin>>opc;
    }while(opc<=0 || opc>3);
    do{
        cout<<"Ingrese la nota a actualizar";cin>>nota;
    }while(nota<0 || nota>10);
    controlador->actualizarnota(opc,nota);
    cout<<"La nota a sido "<<opc <<" actualizada";
    cout<<"Gracias\n";
}
void Vista::imprimir()
{
    cout<<controlador->visualizar();
}
