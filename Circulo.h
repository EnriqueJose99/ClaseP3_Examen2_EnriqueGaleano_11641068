#ifndef CIRCULO_H
#define CIRCULO_H
#include "Figura.h"
#include <string>
using namespace std;

class Circulo:public Figura{
	private:
		double radio;
	public:
		double getArea();
		string toString();
		Circulo(double);
		Circulo();

};
#endif
