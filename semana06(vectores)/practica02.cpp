#include<stdio.h>
//numero mayor y menor
int main(){
    printf("ingrese los 10 numeros: ");
    int n[10],i;
    for (i=0 ; i <10 ;i++){
        scanf("%d", &n[i]);
    }
    int nMayor = n[0], nMin = n[0];
    for (i = 1; i < 10; i++){
        if (n[i] > nMayor)
            nMayor = n[i];
        if (n[i] < nMin )
         nMin = n[i];    
    }
    printf("el numero mayor es: %d \n", nMayor);
    printf("el numero menor es: %d \n", nMin);
    return 0;
}                               