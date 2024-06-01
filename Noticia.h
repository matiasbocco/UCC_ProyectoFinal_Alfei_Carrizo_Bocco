//El detalle de datos de cada noticia es el siguiente Noticias (Título, Detalle, dia, mes, año, autor)

#pragma once
#include "Autorr.h"
#include "Comentario.h"
#include <vector>
class Noticia: public Autorr{
private:
    std::string m_titulo;
    std::string m_detalle;
    int m_dia;
    int m_mes;
    int m_anio;
    int m_autorDNI;
    std::vector <Comentario> comentarios;

public:
Noticia (std::string titulo, std::string detalle, int dia, int mes, int anio, int autorDNI):
m_titulo{titulo},
m_detalle{detalle},
m_mes{mes},
m_dia{dia},
m_anio{anio},
m_autorDNI{autorDNI}
{}


void comentar (const Comentario& comentario){
comentarios.push_back(comentario);
}


// Hacer geters y seters

int get_dia(){
return m_dia;
}
int get_mes(){
return m_mes;
}
int get_anio(){
    return m_anio;
}
int get_autorDNI(){
    return m_autorDNI;
}
void set_dia(int dia){
    m_dia=dia;
}
void set_mes(int mes){
    m_mes=mes;
}
void set_anio(int anio){
    m_anio=anio;
}
void set_autorDNI(int autorDNI){
    m_autorDNI=autorDNI;
}
};