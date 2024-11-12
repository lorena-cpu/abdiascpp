#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Ingresa un numero entero n: ";
    cin >> n;

    int suma_pares = 0;
    int suma_impares = 0;
    int i = 1; // Comenzar desde 1

    // Usar un bucle while para sumar los números
    while (i <= n) {
        if (i % 2 == 0) {
            // Si es par, sumar a suma_pares
            suma_pares += i;
        } else {
            // Si es impar, sumar a suma_impares
            suma_impares += i;
        }
        i++; // Incrementar i
    }

    // Mostrar los resultados
    cout << "La suma de los numeros pares es: " << suma_pares << endl;
    cout << "La suma de los numeros impares es: " << suma_impares << endl;

    return 0;
}
