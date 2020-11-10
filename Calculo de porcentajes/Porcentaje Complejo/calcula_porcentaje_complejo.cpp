// Programa: Calcular el porcentaje sobre precio con porcentaje aplicado
// Autor: Alberto Ocaranza
// Fecha: 10-11-2020
#include <iostream>
using namespace std;

// Funcion calculadora de porcentaje
float calcPorcentaje(float precio, float descuento){
    float pFinal = 0;

    // Hacemos el calculo de la rebaja del precio según el porcentaje
    pFinal = (precio / 100) * descuento;
    pFinal = precio - pFinal;

    // Retornamos el valor final
    return pFinal;
}
int main(){
    // Inicializar variables
    float precio    = 0;
    float descuento = 0;
    float pFinal    = 0;
    char opc        = NULL;

    // Corremos el proceso mientras la opción a elegir no sea x
    while(opc != 'x'){
        // Mostrar el menu con las opciones validas.
        cout << "______________________________________________________________" << endl;
        cout << "Calculadora de porcentajes complejos." << endl;
        cout << "Opciones: " << endl;
        cout << "(C): Calcular porcentaje " << endl;
        cout << "(N): Calcular de nuevo " << endl;
        cout << "(R): Reinciar valores " << endl;
        cout << "(X): Salir " << endl;
        cout << "______________________________________________________________" << endl;
        cout << "> ";

        // Requerimos la opcion del usuario
        cin >> opc;

        // Si la opcion es R entonces reinicia el proceso
        // Si la opcion es R asigna el valor 0 a todas las variables
        // Mediante un switch case seleccionamos el proceso a seguir
        switch(opc){
            // Caso c: calculamos por primera vez el porcentaje de n numero y almacenamos el valor final
            case 'c':
                cout << "______________________________________________________________" << endl;
                cout << "Calcular porcentaje." << endl;
                cout << "Introduce el precio inicial: ";
                cin >> precio;
                cout << "Introduce el descuento a aplicar: ";
                cin >> descuento;
                pFinal = calcPorcentaje(precio, descuento);

                cout << "**************************************************************" << endl;
                cout << "Precio final: " << endl;
                cout << "$" << pFinal << endl;

                descuento = 0;

            break;
            // Caso n: volvemos a calcular el porcentaje con el precio anterior con rebaja del nuevo porcentaje
            case 'n':
                cout << "______________________________________________________________" << endl;
                cout << "Calcular de nuevo." << endl;
                cout << "Aplica un descuento a un precio ya descontado." << endl;
                cout << "Introduce un nuevo descuento: ";
                cin >> descuento;

                cout << "**************************************************************" << endl;
                cout << "Aplicando el " << descuento << "% de descuento a " << pFinal << endl;
                cout << "Nuevo precio con descuento: " << calcPorcentaje(pFinal, descuento) << endl;

                descuento, precio, pFinal = 0;
            break;
            case 'r':
                // Caso r: reiniciamos todos los valores a 0
                cout << "______________________________________________________________" << endl;
                cout << "--Reiniciar valores--" << endl;
                descuento, precio, pFinal = 0;
            break;
            // Ninguno de los casos anteriores se pudo cumplir así que mandamos un mensaje de error
            default:
                cout << "______________________________________________________________" << endl;
                cout << "Opcion invalida, revisa las opciones disponibles" << endl;
        }

    }

    return 0;
}
