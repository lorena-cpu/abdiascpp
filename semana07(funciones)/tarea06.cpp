//paso por referencia
#include <iostream>
using namespace std;

void intercambiar(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int num1, num2;
    cout << "Ingrese dos numeros: "<<endl;
    cin >> num1 >> num2;
    intercambiar(num1, num2);
    cout<<"Despues de intercambiar: num1 = "<<num1<<", num2 = "<<num2<<endl;
    return 0;
}
