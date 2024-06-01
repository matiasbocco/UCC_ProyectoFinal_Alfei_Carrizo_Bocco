#pragma once
#include <iostream>
#include "Persona.h"
class Autorr: public Persona{
private:
    Persona m_persona;
std::string m_medio;

public:
Autorr() :
Persona(),
m_medio()
{}

Autorr (std::string nombre,int dni,std::string medio)
:m_persona(nombre,dni)
,m_medio{medio}{};

std::string get_medio()const{
    return m_medio;};
    int get_dniA()const{
        return m_persona.get_dnip();}
    std::string get_nombreA()const{
        return m_persona.get_nombrep();}
void set_medio(const std::string& medio){
    m_medio=medio;
}

};




