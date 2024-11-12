#include <iostream>
#include <string>
using namespace std;

const int MAX_ALUMNOS = 100; 

int main() {
    string codigos[MAX_ALUMNOS];
    int ids[MAX_ALUMNOS];
    string primeraOpcion[MAX_ALUMNOS];
    string segundaOpcion[MAX_ALUMNOS];
    double promedioNotas[MAX_ALUMNOS];  
    string modalidadEstudio[MAX_ALUMNOS]; 
    int cantidadAlumnos = 0;

    char continuar;

    do {
        if (cantidadAlumnos >= MAX_ALUMNOS) {
            cout << "Se ha alcanzado el maximo número de inscripciones." << endl;
            break;
        }

        cout << "Ingrese el codigo del alumno: ";
        cin >> codigos[cantidadAlumnos];

        cout << "Ingrese el ID del colegio: ";
        cin >> ids[cantidadAlumnos];

        cout << "Ingrese la primera opcion de carrera: ";
        cin.ignore(); 
        getline(cin, primeraOpcion[cantidadAlumnos]);

        cout << "Ingrese la segunda opcion de carrera: ";
        getline(cin, segundaOpcion[cantidadAlumnos]);

        cout << "Ingrese el promedio de notas en la escuela: ";
        cin >> promedioNotas[cantidadAlumnos];

        cout << "Ingrese la modalidad de estudio (autoestudio, cepre, academia): ";
        cin.ignore(); 
        getline(cin, modalidadEstudio[cantidadAlumnos]);

        cantidadAlumnos++;
        cout << "¿Desea inscribir otro alumno? (s/n): ";
        cin >> continuar;

    } while (continuar == 's' || continuar == 'S');

    cout << "\nInscripciones realizadas:\n";
    for (int i = 0; i < cantidadAlumnos; i++) {
        cout << "Alumno " << (i + 1) << ": "
             << "Codigo: " << codigos[i] 
             << ", ID Colegio: " << ids[i]
             << ", Primera Opcion: " << primeraOpcion[i] 
             << ", Segunda Opcion: " << segundaOpcion[i]
             << ", Promedio de Notas: " << promedioNotas[i]
             << ", Modalidad de Estudio: " << modalidadEstudio[i] << endl;
    }

    return 0;
}
