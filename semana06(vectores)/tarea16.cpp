#include <iostream>
using namespace std;
int main() {
    int opcion;
    do {
        cout << "Seleccione una opcion:" << endl;
        cout << "1. Imprimir 'Hola'" << endl;
        cout << "2. Imprimir 'Adios'" << endl;
        cout << "3. Salir" << endl;
        cout << "Ingrese su opcion (1-3): ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Hola" << endl;
                break;
            case 2:
                cout << "Adios" << endl;
                break;
            case 3:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opcion no valida. Por favor, intente de nuevo." << endl;
        }
    } while (opcion != 3);

    return 0;
}
