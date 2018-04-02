#ifndef DOUBLE_H
#define DOUBLE_H
#include <iostream>
using namespace std;
class Double{
public:
  double encapsular;
  Double();
  Double(double);
  //Operadores de + y -
  double operator +(Double&);
  double operator -(Double&);
  double getEncap();

};
#endif
