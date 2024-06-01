#pragma once
#include <iostream>
#include "Persona.h"
class Autorr: public Persona{
private:Persona m_persona;
std::string m_medio;

public:
Autorr() :
Persona(),
m_medio() {}

Autorr (std::string nombre,int dni,std::string medio)
:m_persona(nombre,dni)
,m_medio{medio}{};

std::string get_medio(){
    return m_medio;};
};
//Hacer geters con persona.get_dni y seters



