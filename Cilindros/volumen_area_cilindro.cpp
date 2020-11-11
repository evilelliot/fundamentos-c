// Programa: calcular el area y el volumen de un cilindro
// Autor: Alberto Ocaranza
// Fecha: 10-11-2020
#include <iostream>
#include <math.h>
using namespace std;
// Definimos el valor de PI en una constante
#define PI 3.1415

int main(){
/*
Primero inicializamos las variables correspondientes.
Necesitamos como datos de entrada: el radio de la base del cilindro, su altura.
Necesitamos como datos de salida: el area y el volumen.
Necesitamos como constantes: PI
*/
// Usamos valores flotantes
// Todas las variables inician en 0 para evitar garbage
float r = 0, h = 0, dos = 2;
float volumen = 0, area = 0;
char opt = NULL;


// Ejecutaremos un loop que se detendrá solo en el caso de que la opción sea salir
while(opt != 'x'){
    // Mandamos mensajes al usuario como instrucciones para usar el programa
    cout << "_______________________________________" << endl;
    cout << "Calculadora de cilindros" << endl;
    cout << "[a] Calcular el volumen" << endl;
    cout << "[b] Calcular el area" << endl;
    cout << "[c] Calcular las dos" << endl;
    cout << "[x] Salir" << endl;
    cout << "_______________________________________" << endl;

    // Al final de la ejecución del loop preguntaremos por la opción
    cin >> opt;

    // Instrucción switch
    switch(opt){
        case 'a':
            cout << "***************************************" << endl;
            cout << "Calcular el area" << endl;
            cout << "Introduzca el radio de la base: " << endl;
            cin >> r;
            cout << "Introduzca la altura: " << endl;
            cin >> h;
            area = (dos*PI*r*h)+(dos*PI*pow(r, 2));

            cout << "El area del cilindro es: " << area << endl;

        break;
        case 'b':
            cout << "***************************************" << endl;
            cout << "Calcular el volumen" << endl;
            cout << "Introduzca el radio de la base: " << endl;
            cin >> r;
            cout << "Introduzca la altura: " << endl;
            cin >> h;
            volumen = PI*pow(r, 2)*h;

            cout << "El area del cilindro es: " << volumen << endl;

        break;
        case 'c':
            cout << "***************************************" << endl;
            cout << "Calcular volumen y area" << endl;
            cout << "Introduzca el radio de la base: " << endl;
            cin >> r;
            cout << "Introduzca la altura: " << endl;
            cin >> h;
            volumen = PI*pow(r, 2)*h;
            area = (dos*PI*r*h)+(dos*PI*pow(r, 2));

            cout << "El area del cilindro es: " << area << endl;
            cout << "El volumen del cilindro es: " << volumen << endl;
        break;
        case 'x':
            cout << "x" << endl;
        break;
        default:
            cout << "Error: la opción que introdujiste es invalida" << endl;
    }
}
return 0;
}






