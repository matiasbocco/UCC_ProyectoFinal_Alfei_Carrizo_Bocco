#pragma once
#include <iostream>
#include "Persona.h"
class Autor: public Persona{
private:
    Persona m_persona;
std::string m_medio;
public:
Autor (int dni, std::string nombre,std::string medio):
m_persona(nombre,dni),
m_medio{medio}{
assert(medio!="\0")
    };
//Hacer geters con persona.get_dni y seters


};