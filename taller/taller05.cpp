#include<iostream>
using namespace std;
int main(){
    int numero;
    cout<<"ingrese un numero"<<endl;
    cin>>numero;
    if(numero % 3 ==0 && numero % 5==0){
        cout<<"el numero es divisible entre 3 y 5";
    } else {
        cout<<"no es divisible entre 3 y 5";
    } return 0;
}