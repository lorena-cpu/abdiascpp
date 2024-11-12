#include <iostream>
#include <vector>
#include <string>
using namespace std;

void mostrarCursos(const vector<string>& cursos) {
   cout<<"1.Razonamiento Matematico"<<endl<<"2.Razonamiento Verbal"<<endl<<"3.Fisica"<<endl;
   cout<<"4.Geometria"<<endl<<"5.Aritmetica"<<endl<<"6.Trigonometria"<<endl;
   cout<<"7.Biologia"<<endl<<"8.Humanidades"<<endl<<"9.Algebra"<<endl<<"10.Quimica"<<endl;
}

void inscribirse() {
    int eleccion;
    cout << "Seleccione el numero del ciclo que desea inscribirse:1,2,3 "<<endl;
    cin >> eleccion;

    if ( eleccion == 1) {
        cout << "Te has matriculado en el ciclo 1 "<<endl;
    }
    if (eleccion == 2){
        cout << "Te has matriculado en el ciclo 2 "<<endl;
    if (eleccion == 3){
       cout<<"te has matriculado en el cicclo 3"<<endl; 
    }
    }
}

int main() {
    vector<string> cursos = {"ciclo 1:enero-marzo","ciclo 2:mayo-agosto","ciclo 3:setiembre-diciembre"};
    int opcion;

    do {
        cout << "bienvenido a la CEPRE-UNAS" << endl;
        cout << "1. los cursos que se van a dictar" << endl;
        cout << "2. ciclo que deseas matricularte" << endl;
        cout << "3. detalles de la matricula "<<endl;
        cout << "Seleccione una opcion: "<<endl;
        cin >> opcion;

        switch (opcion) {
            case 1:
                mostrarCursos(cursos);
                break;
            case 2:
                inscribirse();
                break;
            case 3:
              cout<<"bienvenido ahora eres alumno de la cepre "<<endl ;
              break;   
            default:
                cout << "Opcion no valida. Intentalo de nuevo." << endl;
        }
    } while (opcion != 3);
   double nota1,nota2,nota3,nota4, promedio;
   double promedio1;
   string cepre,fecha2;
   string fecha1,fecha3,fecha4;
   int periodo ; 
   cout <<"codigo del alumno: 0020240348 "<<endl;
   getline(cin, cepre);
   cout <<"ingresa nuevamente el ciclo que elegiste: "<<endl;
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
    return 0;
} 
