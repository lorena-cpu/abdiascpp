#include <iostream>
#include <vector>
using namespace std;
void imprimirMatriz(const vector<vector<int>>& matriz) {
    for (const auto& fila : matriz) {
        for (const auto& elemento : fila) {
            cout << elemento << " ";
        }
        cout << endl;
    }
}
    vector<vector<int>> multiplicarMatrices(const vector<vector<int>>& A, const vector<vector<int>>& B) {
    int n = A.size();        // Número de filas de A
    int m = A[0].size();     // Número de columnas de A (filas de B)
    int p = B[0].size();     // Número de columnas de B
    vector<vector<int>> resultado(n, vector<int>(p, 0));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < p; ++j) {
            for (int k = 0; k < m; ++k) {
                resultado[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    return resultado;
}
int main() {
    vector<vector<int>> A = {
        {1, 2, 3},
        {4, 5, 6}
    };
    vector<vector<int>> B = {
        {7, 8},
        {9, 10},
        {11, 12}
    };
    vector<vector<int>> resultado = multiplicarMatrices(A, B);

    cout << "Matriz A:" << endl;
    imprimirMatriz(A);

    cout << "Matriz B:" << endl;
    imprimirMatriz(B);

    cout << "Resultado de A * B:" << endl;
    imprimirMatriz(resultado);

    return 0;
}

