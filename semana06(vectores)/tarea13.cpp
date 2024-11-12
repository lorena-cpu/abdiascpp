#include <iostream>
using namespace std;
int main() {
    int a, b;
    cout << "Ingresa la base (a): ";
    cin >> a;
    cout << "Ingresa el exponente (b): ";
    cin >> b;

    long long resultado = 1; 

    for (int i = 0; i < b; i++) {
        resultado *= a; 
    }
    cout << a << "^" << b << " = " << resultado << endl;

    return 0;
}
