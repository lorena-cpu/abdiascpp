#include <iostream>
using namespace std;

int maximo(int a, int b, int c) {
    return max(a, max(b, c));
}

int main() {
    int num1, num2, num3;
    cout << "Ingrese tres numeros: "<<endl;
    cin >> num1 >> num2 >> num3;
    cout << "El maximo es: " << maximo(num1, num2, num3) << endl;
    return 0;
}
