#pragma once
#include <iostream>
//Ver como funcionan los vectores
class Comentario{
private:
int m_numero;
std::string m_texto;
int m_usuarioDNI;

public:

Comentario(int numero, std::string texto, int usuarioDNI):
m_numero{numero},
m_texto{texto},
m_usuarioDNI{usuarioDNI}{
    //Usuario debe estar registrado
}
//geters y seters
int get_numero (){
    return m_numero;
}
std::string get_texto(){
    return m_texto;
}
int get_usuarioDNI(){
    return m_usuarioDNI;
}
void set_numero(int numero){
    m_numero=numero;
}
void set_texto (std::string texto){
    m_texto=texto;}
void set_usuarioDNI (int usuarioDNI){
    m_usuarioDNI=usuarioDNI;}

};