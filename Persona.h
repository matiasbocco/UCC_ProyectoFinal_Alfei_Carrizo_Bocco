#pragma once
 class Persona{
private:
    std::string m_nombre;
    int m_dni;

public:
    Persona()
    :m_nombre{'\0'}
    ,m_dni{0}
    {}

    Persona(std::string nombre,int dni)
    :m_nombre{nombre},
    m_dni{dni}
    {
    assert(m_dni>9999999 && m_dni<99999999),
    assert(m_nombre != "\0");
    }

int get_dnip ()const {
  return m_dni;}
std::string get_nombrep (){
  return m_nombre;}

  void set_dnip(int dni){
        m_dni=dni;}
void set_nombep(std::string nombre){
    m_nombre=nombre;}
};