#include <iostream>
#include<conio.h>
//ejercicio con condicionales
int main(){
float promedio=0,descuento=0, colegiatura=1500,total=0;
printf("\n\tcual fue tu promedio?:");scanf("%f",&promedio);
if(promedio>=9)
{
    descuento=0.2;
}
else
{
    if(promedio>=8 && promedio <9)
    {
        descuento=0.1;
    }
    else
    {
        if(promedio>=7 && promedio <8)
        {
            descuento=0.05;
        }
        else
        {
            descuento=0;
        }
    }
}
total=colegiatura-colegiatura*descuento;
printf("\n\tTu colegiatura sera de %.2f",total);
getch();
} 