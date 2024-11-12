#include <iostream>
#include <limits>
int main() {
    int n, m;
    std::cout << "Ingresa el numero de filas (n): ";
    std::cin >> n;
    std::cout << "Ingresa el numero de columnas (m): ";
    std::cin >> m;
    int array[n][m];
    std::cout << "Ingresa los elementos de la matriz:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            std::cin >> array[i][j];
        }
    }
    int minValue = std::numeric_limits<int>::max();
    int maxValue = std::numeric_limits<int>::min();
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (array[i][j] < minValue) {
                minValue = array[i][j];
            }
            if (array[i][j] > maxValue) {
                maxValue = array[i][j];
            }
        }
    }
    std::cout << "Valor minimo: " << minValue << std::endl;
    std::cout << "Valor maximo: " << maxValue << std::endl;
    return 0;
}
