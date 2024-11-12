#include <iostream>
using namespace std;

void calcularFactorial(int num, long long& resultado) {
    resultado = 1;
    for (int i = 1; i <= num; i++) {
        resultado *= i;
    }
}

int main() {
    int numero;
    long long factorial;
    cout << "Ingrese un numero: ";
    cin >> numero;
    calcularFactorial(numero, factorial);
    cout << "El factorial de " << numero << " es: " << factorial << endl;
    return 0;
}
