#include <iostream>
#include <fstream>
#include <vector>
#include "Usuario.h"
#include "Noticia.h"

void crearUsuario(std::vector<Usuario> usuarios);
void crearAutor(std::vector<Autorr> autores);
void crearNoticia(std::vector<Noticia> noticias);
void comentarNoticia(std::vector<Noticia>& noticias, const std::vector<Autorr>& autores);

int main(){

}
 void crearUsuario (){
        std::string nombre;
    int edad, dni;
    std::cout << "Ingrese el DNI del usuario: ";
    std::cin >> dni;
    std::cout << "Ingrese el nombre del usuario: ";
    std::cin >> nombre;
    std::cout << "Ingrese la edad del usuario: ";
    std::cin >> edad;
    // Usar seters

}
void crearAutor(){
        std::string nombre, medio;
        int dni;
    std::cout << "Ingrese el DNI del autor: ";
    std::cin >> dni;
    std::cout << "Ingrese el nombre del autor: ";
    std::cin >> nombre;
    std::cout << "Ingrese el medio del autor: ";
    std::cin >> medio;
}
//
// Created by Mbocco on 28/5/2024.
//

#include "main.h"
