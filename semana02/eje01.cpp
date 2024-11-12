#include <iostream>
#include <math.h>
int main(){
    using namespace std;
    const double lado = 6.0;

    double area, perimetro, diagonal;
    area = lado * lado;
    perimetro = 4 * lado;
    diagonal = std::sqrt(2) * lado;
    diagonal = int(diagonal*10000 + 0.5)/10000.0;
    cout << "el area del cuadrado es: " << area << endl;
    cout << "el perimetro del cuadrado es: " << perimetro << endl;
    cout << "el diagonal del cuadrado es: " << diagonal << endl;
    return 0;
} 