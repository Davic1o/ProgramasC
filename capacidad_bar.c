#include <stdio.h>

int main(){
int personas, suma=0;
while(suma<100){
    printf("Ingrese cantidad de personas entran-salen: \n");
    scanf("%d",&personas);
    suma=personas+suma;
        if(suma>100){
    suma=suma-personas;
    printf("El bar no tiene capacidad para este grupo de personas\n");
    }else if (suma<100){
    printf("Hay %d personas en el bar\n",suma);    
    }
    }
if(suma=100){
printf("El bar está lleno, gracias!!");
}
    return 0;
}

