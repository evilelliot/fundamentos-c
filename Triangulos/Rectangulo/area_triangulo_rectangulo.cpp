// Programa: Calcula el area de un triangulo escaleno
// Autor: Alberto Ocaranza
// Fecha: 10-11-2020
#include <iostream>
#include <math.h>
using namespace std;

int main(){
// Inicializando variables
float base   = 0;
float altura = 0;
float area   = 0;

// Dando indicaciones al usuario
// Introducir base y altura
cout << "______________________________________________________" << endl;
cout << "Calculadora de area de triangulos rectangulos." << endl;
cout << "Introuce el tamaño de la base: " << endl;
cin >> base;
cout << "Introuce el tamaño de la altura: " << endl;
cin >> altura;
cout << "______________________________________________________" << endl;

// Calculando area
area = (base*altura) / 2;

// Mostrando area final
cout << "El area del triangulo es: " << area << endl;
return 0;
}
