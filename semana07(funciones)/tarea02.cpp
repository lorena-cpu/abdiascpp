#include <iostream>
using namespace std;

const double PI = 3.14159;

double areaCirculo(double radio) {
    return PI * radio * radio;
}

int main() {
    double radio;
    cout << "Ingrese el radio del circulo: ";
    cin >> radio;
    cout << "El area del circulo es: " << areaCirculo(radio) << endl;
    return 0;
}
