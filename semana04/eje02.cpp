#include<iostream>
using namespace std;
int main (){
    string name;
    int nota[3],promedio;
    string facultad;
    cout<<"nombre de la persona ";
    cin>>name;
    nota[0]=12;
    nota[1]=13;
    nota[2]=14;
    promedio = (nota[0]+nota[1]+nota[2])/3;
    cout<<nota[0]<<endl;
    cout<<nota[1]<<endl;
    cout<<nota[2]<<endl;
    cout<<promedio;
     cout<<"facultad del alumno  " ;
    cin>>facultad;
    
    return 0;
}