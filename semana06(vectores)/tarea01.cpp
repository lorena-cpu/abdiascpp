#include <iostream>
#include <vector>
#include <algorithm> // Necesario para std::reverse
using namespace std;

void rotarArray(vector<int>& arr, int k) {
    int n = arr.size();
    if (n == 0) return; // Si el array está vacío, no hacer nada

    // Ajustar k si es mayor que el tamaño del array
    k = k % n;

    // Rotar el array usando una técnica de reversión
    reverse(arr.begin(), arr.end());         // Invertir todo el array
    reverse(arr.begin(), arr.begin() + k);   // Invertir los primeros k elementos
    reverse(arr.begin() + k, arr.end());      // Invertir el resto
}

void imprimirArray(const vector<int>& arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    int n, k;
    cout << "Ingrese el tamaño del array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Ingrese " << n << " elementos del array: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << "Ingrese el numero de posiciones a rotar (k): ";
    cin >> k;

    rotarArray(arr, k);

    cout << "Array rotado: ";
    imprimirArray(arr);

    return 0;
}
