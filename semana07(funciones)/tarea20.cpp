#include <iostream>
using namespace std;

void imprimirCuadro() {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

int main() {
    imprimirCuadro();
    return 0;
}
