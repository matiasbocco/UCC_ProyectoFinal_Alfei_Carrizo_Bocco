#pragma once
 class Persona{
private:
    std::string m_nombre;
    int m_dni;

public:
    Persona(std::string nombre,int dni):
    m_dni{dni},
    m_nombre{nombre}
    {
    assert(m_dni>9999999 && m_dni<99999999),
    assert(m_nombre != "\0");

    }

};