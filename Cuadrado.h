#ifndef CUADRADO_H
#define CUADRADO_H
#include "Figura.h"
#include <string>

class Cuadrado:public Figura{
	private:
		double base,altura;
	public:
		Cuadrado(double,double);
		Cuadrado();
		virtual double getArea();
		virtual string toString();
};

#endif
