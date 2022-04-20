#include <stdio.h>

int main(){
   float Capin;
   float Interes,Capfin;
   int   Intm, Tiempo;
   printf("Programa para calcular la poliza\n");
    printf("Ingrese capital inicial: ");
   scanf("%f%*c" ,&Capin);
   printf("Ingrese interes: ");
   scanf("%d%*c" ,&Intm);
   printf("Ingrese tiempo: ");
   scanf("%d%*c" ,&Tiempo);
   Interes=Capin*((float)Intm/100);
   Capfin=Capin+(Interes*(float)Tiempo);
   printf("El valor de poliza es %5.2f a un interes de %d%% para %d meses",Capfin,Intm,Tiempo);

    return 0;
}
