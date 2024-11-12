#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Alumno {
private:
    string nombre;
    string numero;
    string dni;
    string colegio;

public:
    Alumno(string n, string num, string d, string col) 
        : nombre(n), numero(num), dni(d), colegio(col) {}

    void mostrarDatos() const {
        cout << "Nombre: " << nombre << endl;
        cout << "Numero de telefono: " << numero << endl;
        cout << "DNI: " << dni << endl;
        cout << "Colegio: " << colegio << endl;
    }

    string getNombre() const {
        return nombre;
    }
};

class SistemaAlumnos {
private:
    vector<Alumno> alumnos;

public:
    void agregarAlumno() {
        string nombre, numero, dni, colegio;

        cout << "Ingrese los datos del alumno:" << endl;
        cout << "Nombre: ";
        getline(cin, nombre);
        cout << "Numero de telefono: ";
        getline(cin, numero);
        cout << "DNI: ";
        getline(cin, dni);
        cout << "Colegio: ";
        getline(cin, colegio);

        Alumno nuevoAlumno(nombre, numero, dni, colegio);
        alumnos.push_back(nuevoAlumno);
cout << "Alumno agregado exitosamente!" << endl;
    }

    void mostrarAlumnos() const {
        cout << "\n--- Lista de Alumnos ---" << endl;
        for (const auto& alumno : alumnos) {
            alumno.mostrarDatos();
            cout << "------------------------" << endl;
        }
    }

    void buscarAlumno() const {
        string nombreBuscado;
        cout << "Ingrese el nombre del alumno a buscar: ";
        getline(cin, nombreBuscado);

        bool encontrado = false;
        for (const auto& alumno : alumnos) {
            if (alumno.getNombre() == nombreBuscado) {
                alumno.mostrarDatos();
                encontrado = true;
                break;
            }
        }

        if (!encontrado) {
            cout << "Alumno no encontrado." << endl;
        }
    }

    void menu() {
        int opcion;
        do {
            cout << "\n--- Menu ---" << endl;
            cout << "1. Agregar Alumno" << endl;
            cout << "2. Mostrar Alumnos" << endl;
            cout << "3. Buscar Alumno" << endl;
            cout << "4. Salir" << endl;
            cout << "Seleccione una opcion: ";
            cin >> opcion;
            cin.ignore();

            switch (opcion) {
                case 1:
                    agregarAlumno();
                    break;
                case 2:
                    mostrarAlumnos();
                    break;
                case 3:
                    buscarAlumno();
                    break;
                case 4:
                    cout << "Saliendo del programa..." << endl;
                    break;
                default:
                    cout << "Opcion inválida, intente de nuevo." << endl;
            }
        } while (opcion != 4);
    }
};

int main() {
    SistemaAlumnos sistema;
    sistema.menu();
    return 0;
}

