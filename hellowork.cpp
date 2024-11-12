#include <iostream>
#include <math.h>
int main() {
  const double lado_a= 3.0;
  const double lado_b= 7.0;
  const double lado_c= 5.0;

  double area,p;

    p = (lado_a + lado_b + lado_c)/2;
    area = std::sqrt(p*(p-lado_a)*(p-lado_b)*(p-lado_c));
   std::cout <<"el SEMIperimetro del TRIANGULO FORMULA HERON es:"<< p<< std::endl;
   std::cout << "el area del TRIANGULO  FORMULA DE HERON  es:" << area << std::endl;
    return 0;

}