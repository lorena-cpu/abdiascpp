#include <iostream>
#include <string>
using namespace std;
int main(){
   double nota1,nota2,nota3,nota4, promedio;
   double promedio1;
   string cepre,fecha2;
   string fecha1,fecha3,fecha4;
   int periodo ; 
   cout <<"codigo del alumno: ";
   getline(cin, cepre);
   cout <<"ingresa nuevamente el ciclo que elegiste: ";
   cin>> periodo;
   if (periodo == 1) {
    cout <<"ciclo enero-marzo se toma 3 examenes: 2 valen 30% y el ultimo vale 40% : "<<endl;
   } else if (periodo == 2){
    cout <<"ciclo mayo-agosto se toma 4 examenes: 3 valen 20% y el ultimo 40%: "<<endl;
   }else if (periodo == 3){
    cout <<"ciclo setiembre-diciembre se toma 4 examenes: 3 valen 20% y el ultimo 40%: "<<endl;
   } else {
     cout <<"no hay mas fechas: "<<endl;
   }
   if (periodo == 1) {
      cout <<"ingresa la nota 1: ";cin>>nota1;cout<<endl;
      cout <<"ingresa la nota 2: ";cin>>nota2;cout<<endl;
      cout <<"ingresa la nota 3: ";cin>>nota3;cout<<endl;
      promedio1 = (((nota1+nota2)/2 *6/10) +(nota3*4/10));
      if(promedio1 > 11 ) {
         cout<<"tienes nota aprovatoria: "<<promedio1;
         }else {
          cout <<"tienes nota desaprovatoria: "<<promedio1;
         }
   } else if (periodo == 2|| periodo==3) {
     cout <<"ingresa la nota 1: ";cin>>nota1;cout<<endl;
     cout <<"ingresa la nota 2: ";cin>>nota2;cout<<endl;
     cout <<"ingresa la nota 3: ";cin>>nota3;cout<<endl;
     cout <<"ingresa la nota 4: ";cin>>nota4;cout<<endl;
     promedio = ((nota1+nota2+nota3)/3 * 6/10) + (nota4*4/10);
      if (promedio>11){
          cout<<"tienes nota aprovatoria: "<<promedio;
         } else {
          cout<<"tienes nota desaprovatoria: "<<promedio;
         }
   } else {
    cout<<"error ingrese del 1 al 3 ";
   }
}