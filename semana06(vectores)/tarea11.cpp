#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Ingresa el numero de filas (n): ";
    cin >> n;

    // Dibujar el triángulo de asteriscos
    for (int i = 1; i <= n; i++) {
        // Imprimir asteriscos
        for (int k = 1; k <= i; k++) {
            cout << "*";
        }
        // Imprimir espacios en blanco para centrar el triángulo
        for (int j = i; j < n; j++) {
            cout << " ";
        }
        // Saltar a la siguiente línea
        cout << endl;
    }

    return 0;
}
