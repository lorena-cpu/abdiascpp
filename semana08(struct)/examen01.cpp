#include <iostream>
#include <string>
using namespace std;
struct datos {
    int DNI;                
    string nombre;    
    int cantidad_personas;  
            
};

int main() {
    
    datos persona1;
    persona1.DNI = 46204996;
    persona1.nombre = "Abdias";
    persona1.cantidad_personas = 6;
    
    cout << "DNI: " << persona1.DNI <<endl;
    cout << "Nombre: " << persona1.nombre << endl;
    cout << "Cantidad de personas: " << persona1.cantidad_personas <<endl;

    return 0;
}
