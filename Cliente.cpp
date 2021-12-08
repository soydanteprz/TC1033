#include "Cliente.h"
#include <iostream>
#include <string>
/*Archivo .cpp de nuestra clase Cliente aqui declaramos nuestros getters y setters
ademas incluimos los metodos que contienen otras clases para el metodo de composicion*/


using namespace std;

//CONSTRUCTOR SIN PARAMETROS SOLO INICIALIZAMOS LOS VALORES
Cliente::Cliente(){
	Producto c1("leche",15,4);
	articulo = c1;
	nombre = " ";
	apellido = " ";
	direccion = " ";
	celular = 0;
	Fecha f1(0,0);

}

//CONSTRUCTOR CON PARAMETROS
Cliente::Cliente(Producto ticket, string nombreC, string apellidoC, string direccionC,int celularC, Fecha fecha_){
	articulo = ticket;
	nombre = nombreC;
	apellido = apellidoC;
	direccion = direccionC;
	celular = celularC;
	fecha = fecha_;
}

Cliente::~Cliente(){}

string Cliente::getNombre(){
    return nombre;

}

string Cliente::getApellido(){
    return apellido;
}

string Cliente::getDireccion(){
    return direccion;
}

int Cliente::getCelular(){
    return celular;
}

void Cliente::setNombre(string nom){
    nombre = nom;
}

void Cliente::setApellido(string apell){
    apellido = apell;
}

void Cliente::setDireccion(string direc){
    direccion = direc;
}

void Cliente::setCelular(int cel){
    celular = cel;
}

Fecha Cliente::getFecha(){
	return fecha;
}

void Cliente::setFecha(Fecha fecha_){
	fecha = fecha_;
}

void Cliente::imprimirInfo(){
    cout<<"Cliente: "<<nombre<<" "<<apellido<<endl;
    cout<<"Direccion: "<<direccion<<endl;
    cout<<"Celular: "<<celular<<endl;articulo.ticket();fecha_.calendario();
}

void Cliente::clienteInfo(){
	cout<<"Cliente: "<<nombre<<" "<<apellido<<endl;
    cout<<"Direccion: "<<direccion<<endl;
    cout<<"Celular: "<<celular<<endl;
}

