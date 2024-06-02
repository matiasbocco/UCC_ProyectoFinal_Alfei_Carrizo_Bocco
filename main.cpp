#include <iostream>
#include <fstream>
#include <vector>
#include "Usuario.h"
#include "Noticia.h"


void crearUsuario(std::vector<Usuario>& usuarios,std::ofstream& archivous);
void crearAutor(std::vector<Autorr>& autores, std::ofstream& archivoau);
void crearNoticia(std::vector<Noticia>& noticias, std::ofstream& archivono);
void comentarNoticia(std::vector<Noticia>& noticias,std::vector<Usuario>& usuarios,std::ofstream& archivono);
void guardarUsuario(const Usuario& usuario, std::ofstream& archivo);
void guardarAutor(const Autorr& autor, std::ofstream& archivo);
void guardarNoticia(const Noticia& noticias, std::ofstream& archivono);
void listarNoticiasAnio(const std::vector<Noticia>& noticias);
void listarNoticiasMes(const std::vector<Noticia>& noticias);
void listarArticulosPorAutor(const std::vector<Noticia>& noticias);
void guardarComentario(const Comentario& comentario, std::ofstream& archivous);
void NoticiasComentarios( std::vector<Noticia>& noticias);

int main(){

// creamos los vectores

std::vector<Autorr> autores;
std::vector<Usuario> usuarios;
std::vector<Noticia> noticias;

//creamos los archivos

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

//menu de opciones

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
break;}

case 2: {
crearAutor(autores,archivoau);
break;}

case 3: {
crearNoticia(noticias,archivono);
break;}

case 4: {
comentarNoticia(noticias,usuarios,archivous);
break;}

case 5:{
    listarNoticiasAnio(noticias);
break;}

case 6: {
listarNoticiasMes(noticias);
break;}

case 7: {
    NoticiasComentarios(noticias);
break;}

case 8: {
    listarArticulosPorAutor(noticias);
break;}

case 9: {
std::cout << "Saliendo del programa \n";
break;}}

}while(opcion!=9);
}

void comentarNoticia (std::vector<Noticia>& noticias, std::vector<Usuario>& usuarios, std::ofstream& archivono) {
    std::string texto, tituloNoticia;
    int numero, usuarioDNI;

    std::cout<<"\nComentando Noticia\n";
    std::cout<<"Ingrese el titulo de la noticia a comentar: \n";
    std::cin.ignore();
    std::getline(std::cin, tituloNoticia);
    std::cout<<"Ingrese el numero: \n";
    std::cin>> numero;
    std::cin.ignore();
    std::cout<<"Ingrese el texto: \n";
    std::getline(std::cin, texto);
    std::cout<<"Ingrese el dni del usuario: \n";
    std::cin>>usuarioDNI;
    std::cin.ignore();
bool usuarioEncontrado = false;
    for (const auto& usuario : usuarios) {
        if (usuario.get_dniU() == usuarioDNI) {
            usuarioEncontrado = true;
            break;
        }
    }
    if (usuarioEncontrado==false) {
        std::cout << "Error: Usuario no encontrado.\n";
        return;
    }
    bool noticiaEncontrada = false;
    for (auto& noticia : noticias) {
        if (noticia.get_titulo() == tituloNoticia) {
            noticia.comentar(Comentario(numero, texto, usuarioDNI));
            noticiaEncontrada = true;
            break;
        }
    }
    if (noticiaEncontrada==false) {
        std::cout << "Error: Noticia no encontrada.\n";
        return;
    }
guardarComentario(Comentario(numero, texto, usuarioDNI),archivono);
}

void crearUsuario (std::vector<Usuario>& usuarios,std::ofstream& archivous){
std::string nombre;
    int dni;
    int edad;
    std::cout << "\nRegistrando Usuario\n";
    std::cout << "Ingrese su nombre: \n";
    std::cin.ignore();
    std::getline(std::cin, nombre);
    std::cout << "Ingrese su DNI: \n";
    std::cin >> dni;
    std::cout << "Ingrese su edad: \n";
    std::cin >> edad;
    std::cin.ignore();
    Usuario nuevoUsuario(nombre, dni, edad);
    usuarios.push_back(nuevoUsuario);
    guardarUsuario(nuevoUsuario, archivous);

}
void guardarUsuario(const Usuario& usuario, std::ofstream& archivo) {
archivo <<"Usuario: \n"<<"Nombre: "<< usuario.get_nombreU() << ", DNI: " << usuario.get_dniU() << ", Edad:" << usuario.get_edad() << "\n";
}


void crearAutor(std::vector<Autorr>& autores, std::ofstream& archivoau){
std::string nombre;
    int dni;
    std::string medio;
    std::cout << "\nRegistrando Autor\n";
    std::cout << "Ingrese su nombre: ";
    std::cin.ignore();
    std::getline(std::cin, nombre);
    std::cout << "Ingrese su DNI: ";
    std::cin >> dni;
    std::cout << "Ingrese el medio: ";
    std::cin.ignore();
    std::getline(std::cin, medio);
    Autorr nuevoAutorr(nombre, dni, medio);
    autores.push_back(nuevoAutorr);
    guardarAutor(nuevoAutorr, archivoau);
}
void guardarAutor(const Autorr& autor, std::ofstream& archivo) {
archivo <<"Autor: \n"<<"Nombre: " << autor.get_nombreA() << ", DNI autor:" << autor.get_dniA() << ", Medio: " << autor.get_medio() << "\n";
}


void crearNoticia(std::vector<Noticia>& noticias,std::ofstream& archivono){
std::string titulo;
    std::string detalle;
    int dia;
    int mes;
    int anio;
    int dniautor;
    std::cout << "\nCreando Noticia\n";
    std::cout << "Ingrese el titulo: ";
    std::cin.ignore();
    std::getline(std::cin, titulo);
    std::cout << "Ingrese detalle: ";
    std::cin.ignore();
    std::getline(std::cin, detalle);
    std::cout << "Ingrese el dia: ";
    std::cin >> dia;
    std::cout << "Ingrese el mes: ";
    std::cin >> mes;
    std::cout << "Ingrese el anio: ";
    std::cin >> anio;
    std::cout << "Ingrese el dni del autor: ";
    std::cin >> dniautor;
    std::cin.ignore();
    Noticia nuevaNoticia(titulo, detalle, dia, mes, anio, dniautor);
    noticias.push_back(nuevaNoticia);
    guardarNoticia(nuevaNoticia, archivono);
}
void guardarNoticia(const Noticia& noticia, std::ofstream  & archivo) {
archivo << "Noticia: \n"<<"Titulo: " << noticia.get_titulo() << ", Detalle: " << noticia.get_detalle() << ", Dia: " << noticia.get_dia() << ", Mes: " << noticia.get_mes() << ", Anio: " << noticia.get_anio() <<  " , DNI del autor: " << noticia.get_autorDNI() << "\n";}

void guardarComentario(const Comentario& comentario, std::ofstream& archivo){
    archivo <<"Comentario: \n" << comentario.get_texto() << ", Número: " << comentario.get_numero() << ", Dni del usuario que comento:" << comentario.get_usuarioDNI() << "\n";
}

void listarNoticiasAnio(const std::vector<Noticia>& noticias) {
   int anio;
    std::cout << "Ingrese el anio el cual desea saber las noticias del mismo \n";
    std::cin >> anio;
    std::cin.ignore();
    bool hayNoticias = false;
    for (const auto& noticia : noticias) {
        if (noticia.get_anio() == anio) {
            std::cout << noticia.get_titulo() << " - " << noticia.get_detalle() << "\n";
            hayNoticias = true;
            break;
            }
        }
    if(hayNoticias==false){
        std::cout << "Error: No hay noticias registradas en ese anio \n";
        return;
        }
       }

void listarArticulosPorAutor(const std::vector<Noticia>& noticias) {
    int dniAutor;
    std::cout<<"Ingrese el DNI del autor el cual desea ver sus noticias\n";
    std::cin>>dniAutor;
    bool hayAutor=false;
    for (const auto& noticia : noticias) {
        if (noticia.get_autorDNI() == dniAutor) {
            std::cout << "Titulo: " << noticia.get_titulo() << "\nDetalle: " << noticia.get_detalle() << "\n";
hayAutor=true;
break;
}}
    if(hayAutor==false){
        std::cout<<"no hay noticias registradas de este autor \n";}
    }

void listarNoticiasMes(const std::vector<Noticia>& noticias){

int mes, anio;
    std::cout<<"Ingrese el anio y mes actual \n";
    std::cin>>anio;
    std::cin>>mes;
    bool hayNoticiames=false;
    bool hayNoticiaanio = false;
    for (const auto& noticia : noticias) {
        if (noticia.get_mes() == mes) {
            hayNoticiames=true;
            }
        if (noticia.get_anio() == anio) {
            hayNoticiaanio=true;
            }
            if(hayNoticiames==true || hayNoticiaanio==true){
          std::cout << noticia.get_titulo() << " - " << noticia.get_detalle() << "\n";
        }else{std::cout<<"no hay noticias registradas en este mes \n";}
    }

    }


void NoticiasComentarios( std::vector<Noticia>& noticias){
 std::string titulo;
 std::cout << "Ingrese el titulo de la noticia: " <<"\n";
 std::cin.ignore();
 std::getline(std::cin,titulo);
 bool existeNoticia=false;
 for (auto& noticia : noticias) {
        if (noticia.get_titulo() == titulo) {
            std::cout << "Noticia encontrada:" << "\n";
                std::cout << "Titulo: " << noticia.get_titulo() << "\n";
                std::cout << "Detalle: " << noticia.get_detalle() << "\n";
                std::cout << "Dia: " << noticia.get_dia() << "\n";
                std::cout << "Mes: " << noticia.get_mes() << "\n";
                std::cout << "Anio: " << noticia.get_anio() << "\n";
                std::cout << "Autor DNI: " << noticia.get_autorDNI() << "\n";
                std::cout << "Comentarios:" << "\n";
                const std::vector<Comentario>& comentarios = noticia.get_comentarios();
                for (const auto& Comentario : comentarios) {
                   std::cout << "Usuario: " << Comentario.get_usuarioDNI() << "\n";
                   std::cout << "Texto: " << Comentario.get_texto() << "\n";
                }
existeNoticia=true;
                break;
                }}
 if(existeNoticia==false){
     std::runtime_error("No existe una noticia con ese titulo");}
        }



//
// Created by Mbocco on 28/5/2024.
//


