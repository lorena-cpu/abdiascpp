#include <iostream>//contadores de vocales consonantes
using namespace std;
string cadena;
int vocales,espacios,i,tamano,consonantes,cantidad;
int main(){
   cout<<"ingrese la oracion :";
   getline(cin,cadena);
   tamano = cadena.length();
   for (  i = 0; i < tamano ; i++)
   {
     if (cadena[i]=='a'){
        vocales = vocales +1;
     }
     else if (cadena[i]=='e'){
        vocales = vocales +1;
     }
     else if (cadena[i]=='i'){
        vocales = vocales +1;
     }
     else if (cadena[i]=='o'){
        vocales = vocales +1;
     }
     else if (cadena[i]=='u'){
        vocales = vocales +1;
     }
     else if (cadena[i]==' '){
        espacios = espacios +1;
     }
     else { 
        consonantes = consonantes +1;
     }
   }
   cout<<"numero total de vocales es :"<<vocales<<endl;
   cout<<"numero total de consonates es :"<<consonantes<<endl;
   cout<<"numero total de espacios es :"<<espacios<<endl;
   return 0;
}
