#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << "Ingrese un numero entero de tres digitos: ";
    cin >> numero;
    if (numero < 100 || numero > 999) {
        cout << "El numero debe ser de tres digitos." << endl;
        return 1; 
    }
    int centena = numero / 100;
    int decena = (numero / 10) % 10;
    int unidad = numero % 10;
    if (centena == decena && decena == unidad) {
        cout << "Todos los digitos son iguales." << endl;
    } else if (centena == decena || decena == unidad || centena == unidad) {
        cout << "Dos digitos son iguales." << endl;
    } else {
        cout << "Todos los digitos son diferentes." << endl;
    }

    return 0;
}
