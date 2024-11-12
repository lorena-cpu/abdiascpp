#include <iostream>
#include <cmath>
//esto es paso por valor
using namespace std;
   void elevarI(int m,int n){
    int potencia =1;
   for (int i = 0; i< n; i++){
     potencia *= m;}
    cout<<m<<" elevado a la "<<n<<" = "<<potencia;
   }
   void elevarV (int m, int n){
   
   }
   int main (){
    int m,n;
    cout <<"ingresar m y n: "<<endl;
    cin>>m>>n;
     elevarI(m,n);
     return 0;}
