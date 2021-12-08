#include "Fecha.h"
#include <iostream>
#include <math.h>
#include <cstdlib>
//Archivo .cpp de nuestra clase Fecha aqui declaramos nuestros getters y setters


using namespace std;
//CONSTRUCTOR SIN PARAMETROS SOLO INICIALIZAMOS LOS VALORES
Fecha::Fecha(){
	dia = 3;
	mes = 12;
};

Fecha::~Fecha(){};

//CONSTRUCTOR CON PARAMETROS
Fecha::Fecha(int dia_, int mes_){
	dia = dia_;
	mes = mes_;
}
int Fecha::getMes(){
	return mes;
}
int Fecha::getDia(){
	return dia;
}
void Fecha::setMes(int mes_){
	mes = mes_;
}
void Fecha::setDia(int dia_){
	dia = dia_;
}
void Fecha::calendario(){
	cout<<"hoy "<<dia<<" de "<<mes<<endl;
}
