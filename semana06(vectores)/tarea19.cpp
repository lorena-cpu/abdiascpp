#include <iostream>
using namespace std;
int main() {
    char letra;
    cout << "Ingrese una letra: ";
    cin >> letra;
    switch (tolower(letra)) { 
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            cout << "Vocal" << endl;
            break;
        case 'b':
        case 'c':
        case 'd':
        case 'f':
        case 'g':
        case 'h':
        case 'j':
        case 'k':
        case 'l':
        case 'm':
        case 'n':
        case 'p':
        case 'q':
        case 'r':
        case 's':
        case 't':
        case 'v':
        case 'w':
        case 'x':
        case 'y':
        case 'z':
            cout << "Consonante" << endl;
            break;
        default:
            cout << "Entrada no válida. Por favor, ingrese una letra." << endl;
    }

    return 0;
}
