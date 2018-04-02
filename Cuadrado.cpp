# include "Cuadrado.h"

Cuadrado::Cuadrado(double base,double altura){
	this->base=base;
	this->altura=altura;
}

Cuadrado::Cuadrado(){
	base=altura=0;
}

double Cuadrado::getArea(){
	return base*altura;
}

string Cuadrado::toString(){
	return " Cuadrado ";
}
