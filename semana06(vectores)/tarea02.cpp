#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cout << "Ingrese el tamano de la matriz (n x n): ";
    cin >> n;
    vector<vector<int>> matriz(n, vector<int>(n));

    cout << "Ingrese los elementos de la matriz:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matriz[i][j];
        }
    }
    int sumaDiagonalPrincipal = 0;
    int sumaDiagonalSecundaria = 0;

    for (int i = 0; i < n; ++i) {
        sumaDiagonalPrincipal += matriz[i][i];              
        sumaDiagonalSecundaria += matriz[i][n - 1 - i];    
    }
    cout << "Suma de la diagonal principal: " << sumaDiagonalPrincipal << endl;
    cout << "Suma de la diagonal secundaria: " << sumaDiagonalSecundaria << endl;
    cout << "Suma total de ambas diagonales: " << sumaDiagonalPrincipal + sumaDiagonalSecundaria <<endl;

    return 0;
}
