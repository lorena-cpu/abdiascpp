#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Ingresa un numero entero n: ";
    cin >> n;

    cout << "Los multiplos de " << n << " entre 1 y 100 son: ";

    for (int i = 1; i <= 100; i++) {
        if (i % n == 0) {
            cout << i << " ";
        }
    }

    cout << endl; 

    return 0;
}
