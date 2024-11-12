#include <iostream>
#include <vector>

using namespace std;

// Función para transponer una matriz
vector<vector<int>> transponer_matriz(const vector<vector<int>>& matriz) {
    int n = matriz.size();        // Número de filas
    int m = matriz[0].size();     // Número de columnas
    vector<vector<int>> transpuesta(m, vector<int>(n)); // Crear matriz transpuesta

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            transpuesta[j][i] = matriz[i][j]; // Intercambiar filas y columnas
        }
    }

    return transpuesta;
}

int main() {
    // Ejemplo de entrada
    vector<vector<int>> matriz_original = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Calcular la transpuesta
    vector<vector<int>> matriz_transpuesta = transponer_matriz(matriz_original);

    // Mostrar la matriz original
    cout << "Matriz original:" << endl;
    for (const auto& fila : matriz_original) {
        for (int elem : fila) {
            cout << elem << " ";
        }
        cout << endl;
    }

    // Mostrar la matriz transpuesta
    cout << "\nTranspuesta de la matriz:" << endl;
    for (const auto& fila : matriz_transpuesta) {
        for (int elem : fila) {
            cout << elem << " ";
        }
        cout << endl;
    }

    return 0;
}
