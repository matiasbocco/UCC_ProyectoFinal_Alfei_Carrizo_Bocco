#pragma once
#include <iostream>
#include "Usuario.h"
#include "Noticia.h"
class Autor: public Persona{
private:
    Usuario m_usuario();


public:
    Autor (int dni, int edad, std::string nombre,std::string titulo, std::string detalle, int dia, int mes, int anio):
m_usuario(dni,edad,nombre),
m_noticia(titulo,detalle,dia,mes,anio){};

    Autor (std::string titulo, std::string detalle, int dia, int mes, int anio):
    m_noticia(titulo,detalle,dia,mes,anio){};

};