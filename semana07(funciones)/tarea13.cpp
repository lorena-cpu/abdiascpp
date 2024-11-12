#include <iostream>
#include <ctime>
using namespace std;

string obtenerFechaActual() {
    time_t t = time(0); // Obtener el tiempo actual
    tm* ahora = localtime(&t);
    return to_string(ahora->tm_mday) + "/" +
           to_string(ahora->tm_mon + 1) + "/" + // Mes en rango 0-11
           to_string(ahora->tm_year + 1900);    // Años desde 1900
}

int main() {
    cout << "Fecha actual: " << obtenerFechaActual() << endl;
    return 0;
}
