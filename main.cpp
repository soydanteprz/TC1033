/* 
Dante David Pérez Pérez
A01709226
TC1033
Ese programa sirve como factura o ticket de tus compras en linea,
muestra a pantalla el cliente, direccion de entrega, numero para contactar,
productos que se compraron, la cantidad y el precio.
*/
// Bilbiotecas
#include <iostream>
#include <string>
#include <cstdlib>
#include "Cliente.cpp"

using namespace std;


Producto listaPro[100];
int i = 0;


void agregarPro();


void menu(){ //Menu de lo que puede hacer el programa 
	cout<<"Bienvenido al programa de Facturas online"<<endl;
	cout<<"1 - Realiza factura del cliente 1 "<<endl;
	cout<<"2- Realiza factura del cliente 2 "<<endl;
	cout<<"3 - Muestra en pantalla los arreglos con producto"<<endl;
	cout<<"4 - Realiza tu propia factura"<<endl;
	cout<<"Cualquier numero - Salir"<<endl;
	
}


void agregarPro(){
	Producto producto1 ("Leche",15,4); 
	listaPro[0] = producto1;						
	i++;									
	Producto producto2 ("Pizza",80,5);
	listaPro[1] = producto2;
	i++;
}

//Cuerpo principal del programa

int main() {
	
	int opcion; //variable para escoger opcion de salir o empezar
	opcion=1;
	
	int continua;//variable para ciclar el prgrama
	continua=0;
	
	while(continua ==0){ //ciclo del programa
		menu();
		cin>>opcion;
		
		if(opcion==1){ //Condicional para escoger una opción
			Producto producto1("Leche",15,4);//objeto producto
			Cliente cliente1(producto1,"Dante","Perez","Queretaro",45454511,Fecha(3,12));//objeto cliente composicion de producto
			cliente1.imprimirInfo();
		}
		else if(opcion==2){
			Producto producto2("Pizza",80,5);
			Fecha f1(4,6);
			Cliente cliente2(producto2,"Kobe","Bryant","Los Angeles",565652335,f1);
			cliente2.imprimirInfo();	
			producto2.ticket();	
		}
		else if(opcion==3){	
			//Uso de arreglos para guardar en una variables todos Los datos de un objeto
			// producto
		
			agregarPro();
			cout<<"Articulo "<<listaPro[0].getArticulo()<<" Precio "<<listaPro[0].getPrecio()<<" Cantidad "<<listaPro[0].getCantidad()<<endl;
			cout<<"Articulo "<<listaPro[1].getArticulo()<<" Precio "<<listaPro[1].getPrecio()<<" Cantidad "<<listaPro[1].getCantidad()<<endl;		
		}
		else if(opcion==4){
			string nomP, nomC, apellC,direcC;
			int precio,cantidad,cellC;
			Producto producto3;
			Cliente cliente3;
			Fecha f3(5,6);
			cout<<"Ingresa nombre del producto ";
			cin>>nomP;
			producto3.setArticulo(nomP);
			cout<<"Ingresa precio ";
			cin>>precio;
			producto3.setPrecio(precio);
			cout<<"Ingresa cantidad ";
			cin>>cantidad;
			producto3.setCantidad(cantidad);
			cout<<"Cual es tu nombre? ";
			cin>>nomC;
			cliente3.setNombre(nomC);
			cout<<"Cual es tu apellido? ";
			cin>>apellC;
			cliente3.setApellido(apellC);
			cout<<"Cual es tu direccion? ";
			cin>>direcC;
			cliente3.setDireccion(direcC);
			cout<<"Cual es tu numero? ";
			cin>>cellC;
			cliente3.setCelular(cellC);
			producto3.ticket();
			cliente3.clienteInfo();
			
		}
		else{
			cout<<"Gracias por utilizar este programa"<<endl;
			continua = continua+1;
		}
	}

	return 0;
}
