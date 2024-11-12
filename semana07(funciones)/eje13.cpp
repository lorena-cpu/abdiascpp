//otro ejemplo de paso por referencia
#include <iostream>
#include <cmath>
using namespace std;
//paso por valor
int A(int a){
    a=50;
    return a;
}
//paso por referencia
void B(int &b){
   b=50;
}
int main(){
 int var=100;
 A(var);
 cout <<"A: "<<var<<endl;
 B(var);
 cout <<"B: "<<var<<endl;
 return 0;
}