#include <iostream>
#include <string>
#include <vector>

struct Articulo {
    int id;                // Código o identificador del artículo
    std::string nombre;    // Nombre del artículo o servicio
    int cantidad;          // Cantidad en stock, precio o aforo máximo
};

int main() {
    int N;
    
    // Solicitar al usuario el tamaño del vector
    std::cout << "Ingrese la cantidad de artículos a almacenar: ";
    std::cin >> N;

    // Crear un vector de Articulo de tamaño N
    std::vector<Articulo> inventario(N);

    // Ingresar los datos de cada artículo
    for (int i = 0; i < N; ++i) {
        std::cout << "Ingrese los detalles del artículo " << (i + 1) << ":\n";
        std::cout << "ID: ";
        std::cin >> inventario[i].id;
        std::cout << "Nombre: ";
        std::cin.ignore(); // Para limpiar el buffer antes de leer un string
        std::getline(std::cin, inventario[i].nombre);
        std::cout << "Cantidad: ";
        std::cin >> inventario[i].cantidad;
    }

    // Mostrar la información de los artículos
    std::cout << "\nInventario:\n";
    for (const auto& articulo : inventario) {
        std::cout << "ID: " << articulo.id
                  << ", Nombre: " << articulo.nombre
                  << ", Cantidad: " << articulo.cantidad << std::endl;
    }

    return 0;
}
