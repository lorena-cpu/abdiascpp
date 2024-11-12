#include<iostream>
using namespace std;
int main (){
    int nota[10];
    int promedio;
    cout<<"ingrese la primera nota"<<endl;cin>>nota[0];
    cout<<"ingrese la segunda nota"<<endl;cin>>nota[1];
    cout<<"ingrese la tercera  nota"<<endl;cin>>nota[2];
    cout<<"ingrese la cuarta nota"<<endl;cin>>nota[3];
    cout<<"ingrese la quinta  nota"<<endl;cin>>nota[4];
    cout<<"ingrese la sexta nota"<<endl;cin>>nota[5];
    cout<<"ingrese la septima  nota"<<endl;cin>>nota[6];
    cout<<"ingrese la octava nota"<<endl;cin>>nota[7];
    cout<<"ingrese la novena nota"<<endl;cin>>nota[8];
    cout<<"ingrese la decima nota"<<endl;cin>>nota[9];
    promedio=(nota[0]+nota[1]+nota[2]+nota[3]+nota[4]+nota[5]+nota[6]+nota[7]+nota[8]+nota[9])/10;
    cout<<"el promedio de las notas es:";
    cin>>promedio;
    

    return 0;
}