#include <iostream>
using namespace std;

int main() {
    float totalCompra, descuento, totalFinal;   
    cout << "Introduce la compra: ";
    cin >> totalCompra;
    descuento = (totalCompra >= 100) ? totalCompra * 0.1 : 0;
    //  total a pagar restando el descuento
    totalFinal = totalCompra - descuento;
    // descuento y el total final
    cout << "El descuento es: " << descuento << " soles" << endl;
    cout << "El total a pagar es: " << totalFinal << " soles" << endl;
    return 0;
}