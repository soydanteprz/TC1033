#include "Producto.h"
#include <string>
#include <iostream>
//Archivo .cpp de la clase Producto aquí realizamos todos los métodos

using namespace std;
//CONSTRUCTOR SIN PARAMETROS SOLO INICIALIZAMOS LOS VALORES
Producto::Producto(){
	articulo = " ";
	precio = 0;
	cantidad = 0;
	total = 0;
}
//CONSTRUCTOR CON PARAMETROS
Producto::Producto(string articulo_, int precio_, int cantidad_){
	articulo = articulo_;
	precio = precio_;
	cantidad = cantidad_;
}


Producto::~Producto(){}

string Producto::getArticulo(){
    return articulo;
}

int Producto::getPrecio(){
    return precio;
}

int Producto::getCantidad(){
    return cantidad;
}

void Producto::setArticulo(string articulo_){
    articulo = articulo_;
}

void Producto::setPrecio(int precio_){
    precio = precio_;
}

void Producto::setCantidad(int cantidad_){
    cantidad = cantidad_;
}

int Producto::precioFinal(){
    total = precio*cantidad;
    return total;

}
//FUNCUION PARA IMPRIMIR LOS DATOS
void Producto::ticket(){
    cout<<"El producto es: "<<articulo<<endl;
    cout<<"Precio: "<<precio<<endl;
    cout<<"Cantidad: "<<cantidad<<endl;
    cout<<"La cantidad a pagar por "<<cantidad<<" "<<articulo<<" es de "<<precioFinal()<<endl;

}

