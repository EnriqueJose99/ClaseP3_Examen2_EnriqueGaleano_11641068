#include "Figura.h"
#include "Cuadrado.h"
#include "Circulo.h"
#include "double.h"
#include <string>
#include <iostream>
#include <vector>
#include <fstream>
//menu
int menu();
//guardado de figuras
void guardar(Figura*);

//leer figura
vector<Figura*> leer(Figura*);


int main(){
  vector<string> leer;
  vector<Figura*> fig;
  Figura* array [10];
  //LLenado de figuras
  array [0] = new Circulo(3);
  array [1] = new Cuadrado(5, 7);
  array [2] = new Cuadrado(9, 2);
  array [3] = new Circulo(8);
  array [4] = new Cuadrado(10, 10);
  array [5] = new Circulo(17);
  array [6] = new Circulo(9);
  array [7] = new Circulo(5);
  array [8] = new Cuadrado(9, 2);
  array [9] = new Cuadrado(14, 2);

  int opc1;
  Double* d1;
  Double* d2;
  while (opc1 != 4) {
    switch (opc1 = menu()) {
      case 1:{
        ofstream file("archivoFiguras.txt", std::ios::out);
        for (int i = 0; i < 10; i++) {
          file<<"EL "<<array[i]->toString()<<"tiene area: "<<array[i]->getArea()<<endl;
        }
        cout<<"Se guardo exitosamente en el archivo de texto"<<endl;
        file.close();

        break;
      }
      case 2:{
        double ingrese1;
        double ingrese2;
            cout<<"Ingrese el primer numero: "<<endl;
            cin>>ingrese1;
            cout<<"Ingrese el segundo numero: "<<endl;
            cin>>ingrese2;
            d1 = new Double(ingrese1);
            d2 = new Double(ingrese2);
            cout<<"La suma de los doubles es de "<< *d1+*d2 <<endl;
            cout<<"La resta de los doubles es de "<< *d1-*d2 <<endl;
          }
      case 3:{
        //leer(array*);
        break;
      }
      case 4:{
        //eliminacion de los apuntadores
        delete *array;
        //delete d1;
      //  delete d2;
        break;
      }
    }
  }
}
vector<Figura*> leer(Figura* array){
  vector<string> g;
  ifstream file("archivoFiguras.txt", std::ios::in);
  if(file.is_open()) {
    while (!file.eof()) {
      string line;
      getline(file,line);
      while (getline(file,line)) {
        g.push_back(line);
      }
    }
  }
  file.close();
  for (int i = 0; i < g.size(); i++) {
    cout<<"La "<<g.at(i)<<endl;
  }
}

void guardar(Figura* array){
  //ofstream file("archivoFiguras.txt", std::ios::out);
  //if (file.is_open()) {
    //for (int i = 0; i < sizeof(array); i++) {
      //if (dynamic_cast<Figura*>(*array[i])){
        //file<<"La "<<array[i].toString()<<" tiene area: "<<array[i].getArea()<<endl;
    // }
    //  file<<" ";
    //}
    //file.close();
  //}
}
int menu(){
  int flag = 0;
  int opc = 0;
  while (flag == 0) {
    cout<<"1. Array ya lleno y escribir en un archivo de texto"<<endl;
    cout<<"2. Sobrecarga de operadores (+, -)"<<endl;
    cout<<"3. Leer del archivo de texto"<<endl;
    cout<<"4. Salir"<<endl;
    cout<<"Ingrese un numero para entrar a la opcion"<<endl;
    cin>>opc;
    return opc;
  }
}
