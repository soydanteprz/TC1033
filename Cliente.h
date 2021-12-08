#ifndef CLIENTE_H
#define CLIENTE_H
#include <string>
#include <iostream>
#include "Producto.h"
#include "Producto.cpp"
#include "Fecha.cpp"
#include "Fecha.h"

/*Archivo .h de nuestra clase Cliente aqui declaramos nuestros atributes y metodos
de todas las clases que vayamos utilizar para el metodo de composicion*/

using namespace std;


class Cliente
{
    public:
        Cliente();
        //Cliente(string,string, string, int);
        Cliente(Producto, string, string, string, int, Fecha);
        // Cliente(string, string,string,int,Producto, Producto, Producto);
        // Setters
        void setArticulo(Producto);
        void setPrecio(Producto);
        void setCantidad(Producto);
        void setNombre(string);
        void setApellido(string);
        void setDireccion(string);
        void setCelular(int);
        void setFecha(Fecha);
        
        //Getters
        Producto getArticulo();
        Producto getPrecio();
        Producto getCantidad();
        virtual ~Cliente();
        string getNombre();
        string getApellido();
        string getDireccion();
        Fecha getFecha();
        int getCelular();
        void imprimirInfo();
        void clienteInfo();


    protected:

    private:
        string nombre, apellido, direccion;
        int celular;
        Producto articulo;
        Producto precio;
        Producto cantidad;
        Fecha fecha;
        Fecha fecha_;

};

#endif // CLIENTE_H
