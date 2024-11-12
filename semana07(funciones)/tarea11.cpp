//devuelve valor, sin argumento
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int generarNumeroAleatorio() {
    return rand() % 100 + 1;  // Número entre 1 y 100
}

int main() {
    srand(static_cast<unsigned int>(time(0))); // Inicializar la semilla
    cout << "Numero aleatorio: " << generarNumeroAleatorio() << endl;
    return 0;
}
