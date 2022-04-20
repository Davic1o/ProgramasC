#include <stdio.h>

int main(){
    float N1, N2,suma;
    printf("Estado del Estudiante\n");
    printf("Ingrese notas: ");
    scanf("%f %f",&N1,&N2);
    suma=N1+N2;
    if ((N1<=10)&&(N2<=10)){
    if
    ((suma>=14)&&(suma<=20))
    printf("Estado: Exonerado");
    else if
    ((suma>=9)&&(suma<14))
    printf("Estado: Suspenso");
    else if
    ((suma>=0)&&(suma<9))
    printf("Estado: Fallido");
    }else{
    printf("Error en las notas");
    }
    
    
    
    return 0;
}
