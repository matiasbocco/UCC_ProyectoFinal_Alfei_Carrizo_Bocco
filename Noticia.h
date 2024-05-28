#pragma once
#include "Autorr.h"
class Noticia: public Autorr{
private:
    std::string m_titulo;
    std::string m_detalle;
    int m_dia;
    int m_mes;
    int m_anio;
    Autor m_noticia();
public:
Noticia(std::string titulo, std::st ring detalle, int dia, int mes, int anio):
m_titulo{titulo},
m_detalle{detalle},
m_mes{mes},
m_dia{dia},
m_anio{anio}{}


};