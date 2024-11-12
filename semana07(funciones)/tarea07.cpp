#include <iostream>
using namespace std;

void calcularDobleTriple(int& num, int& doble, int& triple) {
    doble = num * 2;
    triple = num * 3;
}

int main() {
    int numero, doble, triple;
    cout << "Ingrese un numero: ";
    cin >> numero;
    calcularDobleTriple(numero, doble, triple);
    cout << "Doble: " << doble << ", Triple: " << triple << endl;
    return 0;
}
