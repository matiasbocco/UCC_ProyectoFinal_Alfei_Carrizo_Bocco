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
};