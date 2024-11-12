#include <iostream>
using namespace std;

void contarDigitos(int num, int& totalDigitos, int& digitosPares) {
    totalDigitos = 0;
    digitosPares = 0;
    while (num != 0) {
        totalDigitos++;
        if ((num % 10) % 2 == 0) {
            digitosPares++;
        }
        num /= 10;
    }
}

int main() {
    int numero, total, pares;
    cout << "Ingrese un numero: ";
    cin >> numero;
    contarDigitos(numero, total, pares);
    cout << "Total de digitos: " << total << ", Digitos pares: " << pares << endl;
    return 0;
}
