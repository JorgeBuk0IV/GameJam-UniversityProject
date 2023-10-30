#pragma once
#include "Casita.h"
class Casita2 :
    public Casita
{
public:
    void mostrar(Graphics^ canvas)
    {
        // Llamar a la implementación de la clase base para no tener que escribir mas codigo
        Casita::mostrar(canvas);
       
    }
};

