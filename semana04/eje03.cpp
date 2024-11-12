#include<iostream>
using namespace std;

int main ()  {
 
    int opcion;
    double soles,conversion = 0;
      
     cout<<"######***** conversor de soles*****######"<<endl;
     cout<<" 1. soles a dolares"<<endl;
     cout<<" 2. soles a euros"<<endl;
     cout<<" 3. soles a pesos mexicanos"<<endl,
     cout<<" ingrese una opcion de conversion"<<endl;
     cin>>opcion;
     cout<<" digite la cantidad de soles a convertir: "<<endl;
     cin>>soles;

     switch (opcion)    {

     case 1: 
     conversion = soles / 3.75;
     cout<<" la cantidad es: "<<conversion<<" dolares "<<endl;
     break;
     case 2: 
     conversion = soles / 4.19;
     cout<