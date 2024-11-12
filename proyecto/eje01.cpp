#include <iostream>
#include <string>
using namespace std;
int main(){ //record
    int nota[4], promedio;
    int promedio1,cantidad;
    string cepre,fecha2;
    string fecha1,fecha3,fecha4;
   int periodo ;
   cout <<"codigo del alumno: ";
   getline(cin, cepre);
   cout <<"ingresa la cepre correspondiente del ano: ";
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
   cout <<"ingresa la cantidad de examenes: "<<cantidad;
   cout <<"ingresa las notas: "<<endl;
     for (int i = 0 ;i<cantidad ; i++){
     cin>> nota[i];
     if (i==2){
      promedio1 = (((nota[0]+nota[1])/2 *6/10) +(nota[2]*4/10));
        if(promedio1 > 11 ) {
         cout<<"tienes nota aprovatoria: "<<promedio1;
         }else {
          cout <<"tienes nota desaprovatoria: "<<promedio;
         }
      }   else (i== 3) {
      promedio = ((nota[0]+nota[1]+nota[2])/3 * 6/10) + (nota[3]*4/10);
      
         if (promedio>11){
          cout<<"tienes nota aprovatoria: "<<promedio;
         } else {
          cout<<"tienes nota desaprovatoria: "<<promedio;
         }
     }
     cout <<"la fecha: "; getline(cin,fecha1);cout <<"saco: "<<nota[0];
     cout <<"la fecha: "; getline(cin,fecha2);cout <<"saco: "<<nota[1];
     cout <<"la fecha: "; getline(cin,fecha3);cout <<"saco: "<<nota[2];
     if(cantidad == 4){
     cout <<"la fecha: "; getline(cin,fecha4);cout <<"saco: "<<nota[3];
     }
     }
     
   return 0;
}