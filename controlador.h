#ifndef CONTROLADOR_H
#define CONTROLADOR_H
#include"estudiante.h"

class Controlador
{
private:
    Estudiante *modelo;//objetos dinamicos
    float promedio();

public:
    Controlador();
    void actualizarnota(int nota,int valor);
    string visualizar();
};

#endif // CONTROLADOR_H
