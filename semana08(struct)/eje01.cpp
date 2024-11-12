#include <iostream>
#include <string>

struct Persona {
    std::string nombre;
    int edad;
};

int main() {
    Persona persona1;
    persona1.nombre = "Juan";
    persona1.edad = 30;

    std::cout << "Nombre: " << persona1.nombre << ", Edad: " << persona1.edad << std::endl;
    Persona persona2;
    persona2.nombre = "Maria";
    persona2.edad = 25;

    std::cout << "Nombre: " << persona2.nombre << ", Edad: " << persona2.edad << std::endl;

    return 0;
}