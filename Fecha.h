#ifndef FECHA
#define FECHA
//Archivo .h de nuestra clase Fecha aqui declaramos nuestros atributes y metodos


class Fecha{
	private:
		int dia;
		int mes;

	public:
		Fecha();
		~Fecha();
		Fecha(int, int);
		//Getters
		int getDia();
		int getMes();
		
		//Setters
		void setDia(int);
		void setMes(int);
		void calendario();	
};
#endif
