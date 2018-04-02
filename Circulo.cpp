#include "Circulo.h"

#define PI 3.14159265

Circulo::Circulo(){
}

Circulo::Circulo(double radio){
	this->radio=radio;
}

double Circulo::getArea(){
	return PI*radio*radio;
}

string Circulo::toString(){
	return " Circulo ";
}
