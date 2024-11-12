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
            cin.ignore();  // Limpiar el buffer

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

// Función para mostrar cursos disponibles
void mostrarCursos(const vector<string>& cursos) {
    for (int i = 0; i < cursos.size(); i++) {
        cout << i + 1 << ". " << cursos[i] << endl;
    }
}

// Función para inscribirse a un ciclo
void inscribirse() {
    int eleccion;
    cout << "Seleccione el numero del ciclo al que desea inscribirse (1, 2, 3): ";
    cin >> eleccion;

    switch (eleccion) {
        case 1:
            cout << "Te has matriculado en el ciclo 1 (Enero-Marzo)." << endl;
            break;
        case 2:
            cout << "Te has matriculado en el ciclo 2 (Mayo-Agosto)." << endl;
            break;
        case 3:
            cout << "Te has matriculado en el ciclo 3 (Septiembre-Diciembre)." << endl;
            break;
        default:
            cout << "Opción inválida." << endl;
    }
}

// Función para calcular las notas del alumno
void calcularPromedio(int ciclo) {
    double nota1, nota2, nota3, nota4, promedio;
    cout << "Ingrese la nota 1: "; cin >> nota1;
    cout << "Ingrese la nota 2: "; cin >> nota2;
    cout << "Ingrese la nota 3: "; cin >> nota3;

    if (ciclo == 1) {
        // Ciclo 1 (3 exámenes, dos valen 30% y el último 40%)
        promedio = (((nota1 + nota2) / 2) * 0.6) + (nota3 * 0.4);
    } else {
        // Ciclo 2 y Ciclo 3 (4 exámenes, tres valen 20% y el último 40%)
        cout << "Ingrese la nota 4: "; cin >> nota4;
        promedio = ((nota1 + nota2 + nota3) / 3 * 0.6) + (nota4 * 0.4);
    }

    if (promedio >= 11) {
        cout << "Tienes nota aprobatoria: " << promedio << endl;
    } else {
        cout << "Tienes nota desaprobatoria: " << promedio << endl;
    }
}

// Función principal
int main() {
    SistemaAlumnos sistema;
    vector<string> cursos = {"Ciclo 1: Enero-Marzo", "Ciclo 2: Mayo-Agosto", "Ciclo 3: Septiembre-Diciembre"};
    int opcion, ciclo;
    
    do {
        cout << "Bienvenido a la CEPRE-UNAS" << endl;
        cout << "1. Mostrar los cursos que se van a dictar" << endl;
        cout << "2. Ciclo en el que deseas matricularte" << endl;
        cout << "3. Detalles de la matricula" << endl;
        cout << "4. Administrar Alumnos" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;
        cin.ignore();  // Limpiar el buffer

        switch (opcion) {
            case 1:
                mostrarCursos(cursos);
                break;
            case 2:
                inscribirse();
                break;
            case 3:
                cout << "Detalles de la matricula: Se requiere que el alumno ingrese sus notas." << endl;
                cout << "Seleccione el ciclo (1, 2, 3): ";
                cin >> ciclo;
                calcularPromedio(ciclo);
                break;
            case 4:
                sistema.menu();
                break;
            default:
                cout << "Opción no válida. Inténtalo de nuevo." << endl;
        }
    } while (opcion != 5);

    return 0;
}


