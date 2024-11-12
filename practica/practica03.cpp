#include <iostream>

int main() {
    // Declaración e inicialización de una matriz de 3x4
    int matriz[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    // Mostrar todos los elementos de la matriz
    for (int i = 0; i < 3; i++) { // Iterar sobre las filas
        for (int j = 0; j < 4; j++) { // Iterar sobre las columnas
            std::cout << matriz[i][j] << " ";
        }
        std::cout << std::endl; // Nueva línea después de cada fila
    }

    return 0;
}

    
