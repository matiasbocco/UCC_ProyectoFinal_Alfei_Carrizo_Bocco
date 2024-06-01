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
    std::vector<Autorr> autores;
    std::vector<Usuario> usuarios;
    std::vector<Noticia> noticias;

    std::ofstream archivo;
    archivo.open("Sistema de Noticias.txt");
    if (archivo.fail()){
        std::cout<<"no se pudo abrir el archivo";
    }
    int opcion;
    do{
        std::cout << "\nMenu: " << "\n";
        std::cout << "1- Registrar Usuario "<< "\n";
        std::cout << "2- Registrar Autor" << "\n";
        std::cout << "3- Crear Noticia "<< "\n";
        std::cout << "4- Comentar Noticia" << "\n";
        std::cout << "5- Mostrar listado de noticias publicadas en el anio" << "\n";
        std::cout << "6- Mostrar listado de noticias publicadas en el ultimo mes" << "\n";
        std::cout << "7- Mostrar noticia y sus comentarios" << "\n";
        std::cout << "8- Mostar articulos publicados por autor" << "\n";
        std::cout << "9- Salir" << "\n";
        std::cin >> opcion;
        
        switch(opcion) {
            case 1: {
               crearUsuario(usuarios);
                break;
            }

            case 2: {
                crearAutor(autores);
                break;
            }

            case 3: {
                crearNoticia(noticias);
                break;
            }

            case 4: {
                comentarNoticia(noticias,autores);
                break;
            }

            case 5: {
                break;
            }

            case 6: {
                break;
            }

            case 7: {
                break;
            }

            case 8: {
                break;
            }

            case 9: {
                std::cout << "Saliendo del programa." << "\n";
                break;
            }
        }

    }while(opcion!=9);
}
 void crearUsuario (std::vector<Usuario>& usuarios){
     std::string nombre;
     int dni;
     int edad;
     std::cout << "\nRegistrando Usuario" << "\n";
     std::cout << "Ingrese su nombre: " << "\n";
     std::cin >> nombre;
     std::cout << "Ingrese su DNI: " << "\n";
     std::cin >> dni;
     std::cout << "Ingrese su edad: " << "\n";
     std::cin >> edad;
     usuarios.emplace_back(nombre, dni, edad);

}

void crearAutor(std::vector<Autorr>& autores){
    std::string nombre;
    int dni;
    std::string medio;
    std::cout << "\nRegistrando Autor" << "\n";
    std::cout << "Ingrese su nombre: " << "\n";
    std::cin >> nombre;
    std::cout << "Ingrese su DNI: " << "\n";
    std::cin >> dni;
    std::cout << "Ingrese el medio: " << "\n";
    std::cin >> medio;
    autores.emplace_back(nombre, dni, medio);
}

void crearNoticia(std::vector<Noticia> noticias){
    std::string titulo;
    std::string detalle;
    int dia;
    int mes;
    int anio;
    int dniautor;
    std::cout << "\nCreando Noticia" << "\n";
    std::cout << "Ingrese el titulo: " << "\n";
    std::cin >> titulo;
    std::cout << "Ingrese detalle: " << "\n";
    std::cin >> detalle;
    std::cout << "Ingrese el dia: " << "\n";
    std::cin >> dia;
    std::cout << "Ingrese el mes: " << "\n";
    std::cin >> mes;
    std::cout << "Ingrese el anio: " << "\n";
    std::cin >> anio;
    std::cout << "Ingrese el dni del autor: " << "\n";
    std::cin >> dniautor;
    noticias.emplace_back(titulo,detalle,dia,mes,anio,dniautor);
}

void comentarNoticia(std::vector<Noticia>& noticias, const std::vector<Autorr>& autores){
    std::string texto,tituloNoticia;
    int numero, usuarioDNI;

    std::cout << "\nComentando Noticia" << "\n";
    std::cout << "Ingrese el numero: " << "\n";
    std::cin >> numero;
    std::cout << "Ingrese el texto: " << "\n";
    std::cin >> texto;
    std::cout << "Ingrese el usuario: " << "\n";
    std::cin >> usuarioDNI;

}



//
// Created by Mbocco on 28/5/2024.
//


