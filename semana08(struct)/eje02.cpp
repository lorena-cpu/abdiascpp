#include <iostream>
#include <string>
using namespace std;
struct Persona {
    string nombre;
    int edad;
    int DNI;

};

int main() {
    Persona persona1;
    persona1.nombre = "Juan";
    persona1.edad = 30;
    persona1.DNI = 46204996;
    cout << "Nombre: " << persona1.nombre << ", Edad: " << persona1.edad << endl;
    cout <<"SU DNI es:"<<persona1.DNI<<endl;

    Persona persona2;
    persona2.nombre = "Maria";
    persona2.edad = 25;
    persona2.DNI = 45637281;
    cout << "Nombre: " << persona2.nombre << ", Edad: " << persona2.edad << endl;
    cout<<"su DNI es:"<<persona2.DNI;
    return 0;
}