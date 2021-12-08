#ifndef PRODUCTO_H
#define PRODUCTO_H
#include <string>
#include <iostream>
//Archivo .h de nuestra clase Producto aqui declaramos nuestros atributes y metodos

using namespace std;


class Producto
{
    public:
        Producto();
        Producto(string, int, int);
        virtual ~Producto();
        //Setters
        void setArticulo(string);
        void setPrecio(int);
        void setCantidad(int);
        //Getters
        string getArticulo();
        int getPrecio();
        int getCantidad();
        int precioFinal();
        void ticket();

    protected:

    private:
        string articulo;
        int precio, cantidad, total;
};

#endif // PRODUCTO_H

