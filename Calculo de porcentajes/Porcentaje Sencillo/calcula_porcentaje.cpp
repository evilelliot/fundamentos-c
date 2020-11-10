// Programa: Calcula el porcentaje de descuento de un producto
// Autor: Alberto Ocaranza
// Fecha: 10-11-2020
#include <iostream>
#include <math.h>
using namespace std;

int main(){
// Inicializacion de variables
float precio    = 0;
float descuento = 0;
float pFinal    = 0;

// Dando indicaciones al usuario
// Introducir precio base y descuento a aplicar
cout << "______________________________________________________" << endl;
cout << "Calculadora de descuentos basica." << endl;
cout << "Introuce el precio inicial: " << endl;
cin >> precio;
cout << "Introuce el descuento a aplicar: " << endl;
cin >> descuento;
cout << "______________________________________________________" << endl;

// Calcular explicitamente el descuento
pFinal = (precio / 100) * descuento;
pFinal = precio - pFinal;


// Mostrarle al usuario el precio final de su producto.
cout << "Precio inicial: " << precio << "$" << endl;
cout << "Descuento: " << descuento << "%" << endl;
cout << "Precio con descuento aplicado: " << pFinal << "$" << endl;
return 0;
}
