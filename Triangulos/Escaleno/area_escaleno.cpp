// Programa: Calcula el area de un triangulo escaleno
// Autor: Alberto Ocaranza
// Fecha: 10-11-2020
#include <iostream>
#include <math.h>
using namespace std;

int main(){
// Inicializando las variables necesarias.
float a = 0, b = 0, c = 0;
float area = 0, perimetro = 0;

// Mostrar indicaciones al usuario
cout << "______________________________________________________" << endl;
cout << "Calculadora de area de triangulos escalenos." << endl;
cout << "Introduzca el tamaño del lado A: ";
cin >> a;
cout << "Introduzca el tamaño del lado B: ";
cin >> b;
cout << "Introduzca el tamaño del lado C: ";
cin >> c;
cout << "______________________________________________________" << endl;

// Calculando el area mediante la formula
perimetro = (a+b+c) / 2;
area = perimetro*(perimetro-a)*(perimetro-b)*(perimetro-c);
area = sqrt(area);

cout << "El area del triangulo es: " << area << endl;
cout << "El perimetro del triangulo es: " << perimetro << endl;
return 0;
}
