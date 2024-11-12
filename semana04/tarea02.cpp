#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool esPalindromo(const string& palabra) {
    int longitud = palabra.length();
    
    // Usamos un bucle for para comparar caracteres
    for (int i = 0; i < longitud / 2; i++) {
        // Comparar sin considerar mayúsculas y minúsculas
        if (tolower(palabra[i]) != tolower(palabra[longitud - 1 - i])) {
            return false;
        }
    }
    return true;
}

int main() {
    string entrada;
    
   cout << "Ingresa una palabra: ";
   getline(cin, entrada);
    
    // Verificar si es un palíndromo
    if (esPalindromo(entrada)) {
        cout << "La palabra '" << entrada << "' es un palindromo." << endl;
    } else {
        cout << "La palabra '" << entrada << "' no es un palindromo." << endl;
    }
    
    return 0;
}