//ahora paso por referencia
#include <iostream>
#include <cmath>
using namespace std;
   void elevarI(int x,int y,int &z){
    int resultado =1;
   for (int i = 0; i< y; i++){
     resultado *= x;
     z=resultado;}
   }
   int main (){
    int m,n,resultado;
    cout <<"ingresar m y n: "<<endl;
    cin>>m>>n;
     elevarI(m,n,resultado);
     cout<<m<<" elevado a la "<<n<<" es igual "<<resultado;
     return 0;
     }