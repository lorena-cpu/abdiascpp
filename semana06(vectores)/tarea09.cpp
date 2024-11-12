#include <iostream>
#include <cmath> // Para usar abs()
using namespace std;
int main() {
    int numero;
    cout << "Ingresa un numero entero: ";
    cin >> numero;

    // Trabajar con el valor absoluto del número
    numero = abs(numero);
    
    int numero_invertido = 0;

    // Usar un bucle while para invertir los dígitos
    while (numero > 0) {
        // Obtener el último dígito
        int digito = numero % 10;
        // Añadir el dígito al número invertido
        numero_invertido = numero_invertido * 10 + digito;
        // Eliminar el último dígito del número original
        numero /= 10;
    }

    // Mostrar el resultado
    cout << "El numero invertido es: " << numero_invertido << endl;

    return 0;
}
