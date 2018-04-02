
#ifndef FIGURA_H
#define FIGURA_H
#include <string>
using namespace std;

class Figura{
	private:
	public:
		virtual double getArea();
		virtual string toString()=0;
};
#endif
