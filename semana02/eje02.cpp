#include <iostream>
#include <math.h>
using namespace std;
int main (){
    const double base = 8.0;
    const double altura = 6.0;
    double area,perimetro,diagonal;
    area = base * altura;
    perimetro = 2 * (base + altura);
    diagonal = sqrt((base * base)+(altura * altura));
    cout <<"area del rectangulo es:" << area << endl;
    cout <<"perimetro del rectangulo es:" << perimetro << endl;
    cout <<"diagonal del rectangulo es:" << diagonal << endl;
    return 0;
}