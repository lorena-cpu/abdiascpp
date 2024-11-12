#include <iostream>
#include <string>
#include <vector>
struct persona {
    std::string nombre;
    int DNI;               
    int edad;          
};
int main() {
    int N;
    std::cout << "Ingrese la cantidad de personas que se van alojar: ";
    std::cin >> N;
    std::vector<persona> registro(N);

    for (int i = 0; i < N; ++i) {
        std::cout << "Ingrese los datos de la persona " << (i + 1) << ":\n";
        std::cout << "DNI: ";
        std::cin >> registro[i].DNI;
        std::cout << "Nombre: ";
        std::cin.ignore(); 
        std::getline(std::cin, registro[i].nombre);
        std::cout << "Edad: ";
        std::cin >> registro[i].edad;
    }
    std::cout << "\nInventario:\n";
    for (const auto& persona : registro ) {
        std::cout << "DNI: " << persona.DNI
                  << ", Nombre: " << persona.nombre
                  << ", Edad: " << persona.edad << std::endl;
    }

    return 0;
}