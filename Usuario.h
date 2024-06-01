#pragma once
#include <iostream>
#include <cassert>
#include "Persona.h"
class Usuario: public Persona{
private:
    Persona m_persona;
    int m_edad;

public:
Usuario(std::string nombre, int dni, int edad)
    :m_persona(nombre,dni)
    ,m_edad{edad}
    {
   // assert(m_edad >= 0);
    }

    int get_dniU()const{
        return m_persona.get_dnip();}
    int get_edad()const{
        return m_edad;}
    std::string get_nombreU()const{
        return m_persona.get_nombrep();}

void set_edad(int edad){
    m_edad=edad;
}
void set_dnip(int dni){
    m_persona.set_dnip(dni);
}
void set_nombrep(std::string nombre){
    m_persona.set_nombep(nombre);
}
};