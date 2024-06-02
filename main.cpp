#include <iostream>
#include <fstream>
#include <vector>
#include "Usuario.h"
#include "Noticia.h"

void crearUsuario(std::vector<Usuario>& usuarios,std::ofstream& archivous);
void crearAutor(std::vector<Autorr>& autores, std::ofstream& archivoau);
void crearNoticia(std::vector<Noticia>& noticias, std::ofstream& archivono);
void comentarNoticia(std::vector<Noticia>& noticias, const std::vector<Autorr>& autores);
void guardarUsuario(const Usuario& usuario, std::ofstream& archivo);
void guardarAutor(const Autorr& autor, std::ofstream& archivo);
void guardarNoticia(const Noticia& noticias, std::ofstream& archivono);
void listarNoticiasAnio(const std::vector<Noticia>& noticias, int anio);
void listarArticulosPorAutor(const std::vector<Noticia>& noticias, const int dniAutor);

int main(){
std::vector<Autorr> autores;
std::vector<Usuario> usuarios;
std::vector<Noticia> noticias;

std::ofstream archivous;
archivous.open("Usuarios.txt");
if (archivous.fail()){
std::cout<<"no se pudo abrir el archivo";}

std::ofstream archivoau;
archivoau.open("Autores.txt");
if (archivoau.fail()){
std::cout<<"no se pudo abrir el archivo";}

std::ofstream archivono;
archivono.open("Noticias.txt");
if (archivono.fail()){
std::cout<<"no se pudo abrir el archivo";}


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
crearUsuario(usuarios,archivous);
break;
}

case 2: {
crearAutor(autores,archivoau);
break;
}

case 3: {
crearNoticia(noticias,archivono);
break;
}

case 4: {
comentarNoticia(noticias,autores);
break;
}

case 5: {
    int anio;
    std::cout<<"Ingrese el anio el cual desea saber las noticias del mismo \n";
    std::cin>>anio;
listarNoticiasAnio( noticias, anio);
break;
}

case 6: {
break;
}

case 7: {
break;
}

case 8: {
    int dniAutor;
    std::cout<<"Ingrese el DNI del autor el cual desea ver sus noticias\n";
    std::cin>>dniAutor;
    listarArticulosPorAutor(noticias, dniAutor);
break;
}

case 9: {
std::cout << "Saliendo del programa." << "\n";
break;
}
}

}while(opcion!=9);
}
void crearUsuario (std::vector<Usuario>& usuarios,std::ofstream& archivous){
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
    Usuario nuevoUsuario(nombre, dni, edad);
    usuarios.push_back(nuevoUsuario);
    guardarUsuario(nuevoUsuario, archivous);
}

void guardarUsuario(const Usuario& usuario, std::ofstream& archivo) {

archivo << usuario.get_nombreU() << "," << usuario.get_dniU() << "," << usuario.get_edad() << "\n";
}

void crearAutor(std::vector<Autorr>& autores, std::ofstream& archivoau){
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
    Autorr nuevoAutorr(nombre, dni, medio);
    autores.push_back(nuevoAutorr);
    guardarAutor(nuevoAutorr, archivoau);

}
void guardarAutor(const Autorr& autor, std::ofstream& archivo) {
archivo << autor.get_nombreA() << "," << autor.get_dniA() << "," << autor.get_medio() << "\n";
}

void crearNoticia(std::vector<Noticia>& noticias,std::ofstream& archivono){
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
Noticia nuevoNoticia(titulo,detalle,dia,mes,anio,dniautor);
    noticias.push_back(nuevoNoticia);
    guardarNoticia(nuevoNoticia, archivono);
}
void guardarNoticia(const Noticia& noticia, std::ofstream  & archivo) {
archivo << noticia.get_titulo() << "," << noticia.get_detalle() << "," << noticia.get_dia() << "," << noticia.get_mes() << "," << noticia.get_anio() << "," << noticia.get_autorDNI() << "\n";
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

void listarNoticiasAnio(const std::vector<Noticia>& noticias, int anio) {
    for (const auto& noticia : noticias) {
        if (noticia.get_anio() == anio) {
            std::cout << noticia.get_titulo() << " - " ;
}}}

void listarArticulosPorAutor(const std::vector<Noticia>& noticias, const int dniAutor) {
    for (const auto& noticia : noticias) {
        if (noticia.get_autorDNI() == dniAutor) {
            std::cout << "Título: " << noticia.get_titulo() << "\nDetalle: " << noticia.get_detalle() << "\n\n";
        }
    }
}


//
// Created by Mbocco on 28/5/2024.
//


