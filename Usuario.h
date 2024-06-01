#pragma once
#include <iostream>
#include <cassert>
#include "Persona.h"
class Usuario: public Persona{
private:
    Persona m_persona;
    int m_edad;

public:
Usuario(int dni, int edad, std::string nombre)
    :m_persona(dni,nombre)
    ,m_edad{edad}
    {
assert(m_edad >= 0);
    }

    int getdni()const{
        return m_dni;
    }
    int getedad()const{
        return m_edad;
    }
    std::string getnombre(){
        return m_nombre;
    }
    // Hacer seters
};