output.o: main.o Figura.o Cuadrado.o Circulo.o double.o
	g++ main.o Figura.o Cuadrado.o Circulo.o double.o -o output

main.o: main.cpp Figura.h Cuadrado.h Circulo.h double.h
	g++ -c main.cpp

Figura.o: Figura.cpp Figura.h
	g++ -c Figura.cpp

Cuadrado.o: Cuadrado.cpp Cuadrado.h Figura.h
	g++ -c Cuadrado.cpp

Circulo.o: Circulo.cpp Circulo.h Figura.h
	g++ -c Circulo.cpp

double.o: double.cpp double.h
	g++ -c double.cpp
