// Programa: Calcula la cantidad de pares desde x hasta n
// Autor: Alberto Ocaranza
// Fecha: 10-11-2020
#include <iostream>
using namespace std;

int main(){
// Variables
int n = 0, totalPares = 0;

// Mostrar indicaciones al usuario
// Leer datos del usuario
cout << "Calculadora de pares del 0 a un numero n" << endl;
cout << "Introduce un numero final: " << endl;
cin >> n;

// Utilizar un ciclo for para calcular los pares
// Mostrar los pares en cada vuelta del loop
for(int i = 0; i <= n; i = i + 2){
    cout << "> " << i << endl;
    totalPares++;
}

// Mostrar la cantidad de pares calculada
cout << totalPares - 1 << " fueron calculados." << endl;


return 0;
}
