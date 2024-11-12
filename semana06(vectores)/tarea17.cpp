#include <iostream>
using namespace std;

int main() {
    int año;

    cout << "Ingrese un ano: ";
    cin >> año;

    if ((año % 4 == 0 && año % 100 != 0) || (año % 400 == 0)) {
        cout << "Ano bisiesto" << endl;
    } else {
        cout << "No es ano bisiesto" << endl;
    }

    return 0;
}
