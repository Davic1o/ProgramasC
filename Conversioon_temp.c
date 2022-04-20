#include <stdio.h>
int main(){
    
    float temp=0 , calculo=0;
    printf("Ingrese un valor de temperatura en °C: ");


    scanf("%f%*c",&temp);
    calculo=(temp*1.8)+32;
    printf(" %.1f grados C equivale a %.1f grados F ",temp,calculo);
    return (0);
}
