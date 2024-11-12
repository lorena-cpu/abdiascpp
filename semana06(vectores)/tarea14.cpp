#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Ingresa la cantidad de numeros (n): ";
    cin >> n;
    int positivo = 0, negativo = 0, cero = 0;
    int numero;
     int contador=0;

    do {
        cout << "Ingresa un numero: ";
        cin >> numero;

        if (numero > 0) {
            positivo++;
        } else if (numero < 0) {
            negativo++;
        } else {
            cero++;
        }
      contador++;
    } while (contador<n); 
    cout << "Numeros positivos: " << positivo << endl;
    cout << "Numeros negativos: " << negativo << endl;
    cout << "Numeros ceros: " << cero << endl;

    return 0;
}
