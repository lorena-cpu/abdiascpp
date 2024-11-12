#include <iostream>
#include <cmath>
//esto es paso por valor
//se ha cambiado m por x, n por y 
using namespace std;
   void elevarI(int x,int y){
    int potencia =1;
   for (int i = 0; i< y; i++){
     potencia *= x;}
    cout<<x<<" elevado a la "<<y<<" = "<<potencia;
   }
   void elevarV (int m, int n){
   
   }
   int main (){
    int m,n;
    cout <<"ingresar m y n: "<<endl;
    cin>>m>>n;
     elevarI(m,n);
     return 0;}
