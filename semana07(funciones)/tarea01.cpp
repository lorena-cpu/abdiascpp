//paso por valor
#include <iostream>
using namespace std;
int sumar(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2;
    cout << "Ingrese dos numeros: "<<endl;
    cin >> num1 >> num2;
    cout << "La suma es: " << sumar(num1, num2) << endl;
    return 0;
}
