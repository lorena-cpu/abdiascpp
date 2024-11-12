#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec;  // Crear un vector vacío

    vec.push_back(1);      // Añadir 1
    vec.push_back(2);      // Añadir 2
    vec.push_back(3);      // Añadir 3
    vec.push_back(4);
    // Mostrar los elementos del vector
    for (int i = 0; i < vec.size(); i++) {
        std::cout << vec[i] << " ";  // Salida: 1 2 3 4 ..etc
    }

    return 0;
}
