#include <iostream>
using namespace std;

// Definición de una función que suma dos números
int sumar(int a, int b) {
    return a + b; // Retorna la suma de a y b
}

int main() {
    int resultado = sumar(6, 7); // Llamada a la función
    cout << "La suma es: " << resultado << endl; // Imprime el resultado
    return 0;
}
