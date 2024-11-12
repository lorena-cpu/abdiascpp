#include <iostream>
using namespace std;
char clasificacionNota(int nota) {
    if (nota >= 90 && nota <= 100) {
        return 'A';
    } else if (nota >= 80 && nota < 90) {
        return 'B';
    } else if (nota >= 70 && nota < 80) {
        return 'C';
    } else if (nota >= 60 && nota < 70) {
        return 'D';
    } else if (nota >= 0 && nota < 60) {
        return 'F';
    } else {
        return 'X'; 
    }
}
int main() {
    int nota;
    cout << "Ingrese una nota entre 0 y 100: ";
    cin >> nota;
    char calificacion = clasificacionNota(nota);
    if (calificacion != 'X') {
        cout << "La calificacion correspondiente es: " << calificacion << endl;
    } else {
        cout << "Nota no válida. Debe estar entre 0 y 100." << endl;
    }
    return 0;
}
