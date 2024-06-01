#pragma once
 class Persona{
private:
    std::string m_nombre;
    int m_dni;

public:
    Persona(std::string nombre,int dni):
     m_nombre(nombre)
    m_dni{dni},
    {
    assert(m_dni>9999999 && m_dni<99999999),
    assert(m_nombre != "\0");
    }

int get_dni ()const {
  return m_dni;};
std::string get_nombre (){
  return m_nombre;};

};