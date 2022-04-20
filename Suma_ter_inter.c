#include <stdio.h>
int main() {
    int i, suma=0;
    int A, B;
    while(B<=A){
    printf("Ingrese los limites de un intervalo valido separados por un espacio: ");
    scanf("%d%*c %d%*c",&A,&B);
    }
    i=A;
    while (i<=B){
    suma=suma+i;
    i++;
        
    
    }
    printf("La suma es: %d",suma);
        return 0;
    
}

