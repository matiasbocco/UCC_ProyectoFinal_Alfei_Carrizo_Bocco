#pragma once
#include <iostream>
#include <cassert>
#include "Persona.h"
class Usuario: public Persona{
private:
    int m_edad;
    Persona persona;
public:
Usuario(int dni, int edad, std::string nombre)
    :m_edad{edad}
    ,Persona(dni,nombe)
    {
assert(m_edad >= 0);
    }

    int getdni(){
        return m_dni;
    }
int getedad(){
        return m_edad;
    }
    std::string getnombre(){
        return m_nombre;
    }
};