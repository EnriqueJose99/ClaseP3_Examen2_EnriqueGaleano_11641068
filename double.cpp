#include "double.h"
#include <iostream>
using namespace std;

Double::Double(){

}

Double::Double(double encapsular){
  this -> encapsular = encapsular;
}
double Double::getEncap(){
  return encapsular;
}
//sobrecarga de operadores
double Double::operator +(Double& rightValue){
  double suma;
  suma = this->encapsular+rightValue.getEncap();
  return suma;
}
//sobrecarga de operadores
double Double ::operator -(Double& rightValue){
  double resta;
  resta = this->encapsular-rightValue.getEncap();
  return resta;
}
