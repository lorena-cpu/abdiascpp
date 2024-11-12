#include <iostream>
using namespace std;

void calcularPromedio(int arr[], int size, double& promedio) {
    int suma = 0;
    for (int i = 0; i < size; i++) {
        suma += arr[i];
    }
    promedio = static_cast<double>(suma) / size;
}

int main() {
    int numeros[5];
    double promedio;
    cout << "Ingrese 5 numeros: "<<endl;
    for (int i = 0; i < 5; i++) {
        cin >> numeros[i];
    }
    calcularPromedio(numeros, 5, promedio);
    cout << "El promedio es: " << promedio << endl;
    return 0;
}
