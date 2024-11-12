#include <iostream>
#include <string>
using namespaces std;
struct Negocio {
    string nombre;
    int codigo;             
    int valor;               
}

void mostrar(Negocio arreglo[], int tamaño) {
    for (int i = 0; i < tamaño; ++i) {
        cout << "Código: " << arreglo[i].codigo
                  << ", Nombre: " << arreglo[i].nombre
                  << ", Valor: " << arreglo[i].valor << std::endl;
    }
}

void llenarLista(Negocio arreglo[], int tamaño) {
    for (int i = 0; i < tamaño; ++i) {
        cout << "Ingrese los detalles del negocio " << (i + 1) << ":\n";
        cout << "Código: ";
        cin >> arreglo[i].codigo;
        cout << "Nombre: ";
        cin.ignore(); // Para limpiar el buffer
        getline(cin, arreglo[i].nombre);
        cout << "Valor: ";
        cin >> arreglo[i].valor;
    }
}

int sumarTercerAtributo(Negocio arreglo[], int tamaño) {
    int suma = 0;
    for (int i = 0; i < tamaño; ++i) {
        suma += arreglo[i].valor;
    }
    return suma;
}

void modificar(Negocio arreglo[], int tamaño, int codigo, int nuevoCodigo, const std::string& nuevoNombre, int nuevoValor) {
    for (int i = 0; i < tamaño; ++i) {
        if (arreglo[i].codigo == codigo) {
            arreglo[i].codigo = nuevoCodigo;
            arreglo[i].nombre = nuevoNombre;
            arreglo[i].valor = nuevoValor;
            break; 
        }
    }
}

void eliminar(Negocio arreglo[], int tamaño, int codigo) {
    for (int i = 0; i < tamaño; ++i) {
        if (arreglo[i].codigo == codigo) {
            arreglo[i].codigo = 0;      
            arreglo[i].nombre = "";     
            arreglo[i].valor = 0;         
            break; /
        }
    }
}

int main() {
    int N;
    cout << "Ingrese la cantidad de negocios a almacenar: ";
    cin >> N;

    Negocio* inventario = new Negocio[N];

    llenarLista(inventario, N);
    
    cout << "\nInventario:\n";
    mostrar(inventario, N);

    cout << "\nSuma de valores: " << sumarTercerAtributo(inventario, N) << endl;

    modificar(inventario, N, 1, 2, "Nuevo Nombre", 100);
    cout << "\nInventario después de modificar:\n";
    mostrar(inventario, N);

    eliminar(inventario, N, 2);
    cout << "\nInventario después de eliminar:\n";
    mostrar(inventario, N);

    delete[] inventario; 
    return 0;
}
