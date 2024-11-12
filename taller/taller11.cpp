#include <iostream>
using namespace std;
int cantidad,mayor,menor,numeros[100];
double promedio;
int main(){
	cout<<"cuantas notas insertara :";
    cin>>cantidad;
	for (int i = 0; i < cantidad; i++)
	{
		cout<<"inserte nota "<<i+1<<":";
		cin>>numeros[i];
	}
	mayor=numeros[0];
    menor=numeros[0];
	for (int i = 1; i < cantidad; i++)
	{
		if (numeros[i]>mayor)
		{
			mayor=numeros[i];
		}
	
		if (numeros[i]<menor)
		{
			menor=numeros[i];
		}
	}
	 for (int i = 0; i < cantidad; i++)
	 {
		promedio=promedio+numeros[i];
	 }
	 promedio=promedio/cantidad;
	
	cout<<"la nota menor es :"<<menor<<endl;
	cout<<"la nota mayor es :"<<mayor<<endl;
    cout<<"el promedio es :"<<promedio<<endl;
}