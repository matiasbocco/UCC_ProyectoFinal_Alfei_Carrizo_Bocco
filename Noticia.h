//El detalle de datos de cada noticia es el siguiente Noticias (Título, Detalle, dia, mes, año, autor)

#pragma once
#include "Autorr.h"
class Noticia: public Autorr{
private:
    std::string m_titulo;
    std::string m_detalle;
    int m_dia;
    int m_mes;
    int m_anio;
    int m_autorDNI;
public:
Noticia(std::string titulo, std::string detalle, int dia, int mes, int anio, int usuarioDNI):
m_titulo{titulo},
m_detalle{detalle},
m_mes{mes},
m_dia{dia},
m_anio{anio},
m_usuarioDNI{usuarioDNI}{
    assert(); //Hacer assert. El dni del autor debe estar registrado
}
// Hacer geters y seters

};