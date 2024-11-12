#include <iostream>
#include <iomanip> 
using namespace std;
int main() {
    double precio;
    char tipoDescuento;
    double precioFinal;
    cout << "Ingrese el precio del producto: ";cin>>precio;
    cout << "Seleccione el tipo de descuento (A, B, C): ";cin>> tipoDescuento;
    switch (tipoDescuento) {
        case 'A':
        case 'a':
            precioFinal = precio * 0.90; 
            break;
        case 'B':
        case 'b':
            precioFinal = precio * 0.80; 
            break;
        case 'C':
        case 'c':
            precioFinal = precio * 0.70; 
            break;
        default:
            cout << "Tipo de descuento no válido." << endl;
            return 1; 
    }
    cout << fixed << setprecision(2); 
    cout << "El precio con descuento aplicado es: $" << precioFinal << endl;
    return 0;
}
