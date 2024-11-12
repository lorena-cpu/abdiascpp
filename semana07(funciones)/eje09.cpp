#include <iostream>
#include <cmath>
using namespace std;
   int elevarI(int m,int n){
    int potencia =1;
   for (int i = 0; i< n; i++){
     potencia *= m;}
    return potencia;
   }
   void elevarV (int m, int n){
   
   }
   int main (){
    int m,n;
    cout <<"ingresar m y n: "<<endl;
    cin>>m>>n;
    cout<< elevarI(m,n);
     return 0;}


   




