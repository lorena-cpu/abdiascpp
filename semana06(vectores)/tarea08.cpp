#include <iostream>
#include <cmath> // Para usar abs()
using namespace std;
int main() {
    int numero;
    cout << "Ingresa un numero entero: ";
    cin >> numero;

    // Inicializar la suma de los dígitos
    int suma_digitos = 0;

    // Trabajar con el valor absoluto del número
    numero = abs(numero);

    // Usar un bucle while para sumar los dígitos
    while (numero > 0) {
        // Obtener el último dígito
        int digito = numero % 10;
        // Sumar el dígito a la suma total
        suma_digitos += digito;
        // Eliminar el último dígito del número
        numero /= 10;
    }

    // Mostrar el resultado
    cout << "La suma de los digitos es: " << suma_digitos << endl;

    return 0;
}
