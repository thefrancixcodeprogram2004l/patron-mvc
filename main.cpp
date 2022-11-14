#include <iostream>
#include"estudiante.h"
#include"controlador.h"
#include"vista.h"
using namespace std;

int main()
{
    cout<<"------Registro de notas-------"<<endl;
    Vista *vista=new Vista();
    int opc;
    do{
        cout<<"\n Menu Principal\n";
        cout<<"1.Mostrar datos\n";
        cout<<"2. Actualizar notas\n";
        cout<<"3. salir\n";
        cout<<"ingrese una opcion ";cin>>opc;
        switch (opc) {
        case 1:
            vista->imprimir();
            break;
       case 2:
            vista->actualizarnota();
            break;
      case 3:
            cout<<"Adios....!!!"<<endl;
            break;
        }

    }while(opc!=3);
    return 0;
}
