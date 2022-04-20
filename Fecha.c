#include<stdio.h>
#include <string.h>
typedef struct{
    int dia;
    char mes[4];
    int anio;
    
}tfecha;

int main(){
    tfecha hoy = {20, "ago", 2021};
    printf("HOY ES: %d-%s-%d",hoy.dia,hoy.mes,hoy.anio);    
    
    return 0;
}
