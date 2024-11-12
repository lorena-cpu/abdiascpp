#include <iostream>
#include <iomanip>//la funcion nunca empieza con un numero sino con caracter
using namespace std;
void abdias (int n){ //tambien acepta digitos ejemplo guion abajo
    for (int i = 0; i < n; i++)
    cout <<"buenas dias\n"; //solo en el empiezo es el problema
}
float _007peru(){
   float rest = 5;
   return rest;
}

int main() {
   int n;
   cout <<"ingresa el numero de saludos ";
  cin>>n;
    abdias (n);
  float x= _007peru() ;
  cout<<x;
    return 0;
}