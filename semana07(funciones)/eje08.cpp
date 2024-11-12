#include <iostream>
#include <cmath>
using namespace std;
void potencia(int m,int n){
   cout<<m<<" elevado a la "<<n<<" = "<<pow(m,n);
}
int main(){
    int m,n;
    cout <<"ingresar m y n: "<<endl;
    cin>>m>>n;
     potencia(m,n);
    return 0;
}