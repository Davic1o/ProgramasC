#include <stdio.h>
#include <math.h>
#define LONG_VECTOR 10
int validar (int);
float Imprimirvector(float V[], int d);
float ImprimirvectorO(float V[], int d);
int main(){
    float valores[LONG_VECTOR];
    int n,de,iz,temp=0;
    int i;
    printf("Ingrese la dimension: ");
    scanf("%d", &n);
   if(validar(n)==1){
        printf("Error: Numero no valido!");
   }else{
    printf("Ingreso de valores: \n");
    for(i=0;i<n;i++){
        printf("Valor[%d]: ",i);
        scanf("%e%*c",&valores[i]);
    }
    Imprimirvector(valores,n);
    for(i=0;i<n;i++){
    for(iz=i+1;iz<n;iz++){
        if(valores[iz]<valores[i]){
            temp=valores[iz];
            valores[iz]=valores[i];
            valores[i]=temp;
    }}}
       ImprimirvectorO(valores,n);
   }

    return 0;
}

int validar (int n){
if (n>=10)
return 1;
else
    return 0;
}

float Imprimirvector(float V[], int d){
    int i;
printf("\n\nVector Ingresado:\n");
    for(i=0;i<d;i++){
        printf("[%.2f] ",V[i]);
    }
}
float ImprimirvectorO(float V[], int d){
    int i;
printf("\n\nVector Ordenado:\n");
    for(i=0;i<d;i++){
        printf("[%.2f] ",V[i]);
    }
}


