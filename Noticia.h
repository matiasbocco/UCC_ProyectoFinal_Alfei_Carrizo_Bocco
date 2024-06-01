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


std::string get_titulo()const{
    return m_titulo;}
std::string get_detalle()const{
    return  m_detalle;}
int get_dia()const{
    return m_dia;}
int get_mes()const{
    return m_mes;}
int get_anio()const{
    return m_anio;}
int get_autorDNI()const{
    return m_autorDNI;}
void set_detalle(int detalle){
m_detalle=detalle;
}
void set_titulo(int titulo){
m_titulo=titulo;
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