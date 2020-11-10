// Programa: Conversor Celsius-Fahrenheit
// Autor: Alberto Ocaranza
// Fecha: 10-11-2020
#include <iostream>
using namespace std;

int main(){

// Determinando variables
float cTemperature = 0;
float cFahrenheit  = 0;
// Dando instrucciones al usuario
cout << "Conversor de Centigrados a Fahrenheit." << endl;
cout << "Ingresa la temperatura en Celsius: ";
cin >> cTemperature;
cout << "--------------------------------------" << endl;
// Efectuando la conversión
cFahrenheit = ((9*cTemperature) / 5) + 32;

// Mostrando el final
cout << "La temperatura final es: " << cFahrenheit << "°f" << endl;

return 0;
}
