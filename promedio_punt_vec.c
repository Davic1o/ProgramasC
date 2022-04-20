#include <stdio.h>
#define max 8

void ingresarv(float datos[], int n);
int promedio(int n,float datos[]);

int main(){

    float datos[max];
    int n;
    
    printf("Programa promedio con punteros\n");
    printf("Cuantos elementos ingresara: " );
    scanf("%d",&n);
    ingresarv(datos,n);
    promedio(n,datos);
    
    return 0;
}
    
    

void ingresarv(float datos[], int n){
    int i;
    for(i=0;i<n;i++){
        //printf("datos[%d]: ",i);
        scanf("%f%*c",&datos[i]);
        
    }}
int promedio(int n,float *datos){
    int i;
    float suma,promedio;
    for(i=1;i<n;i++){
    suma=*datos+*(datos+i);
    *(datos+i)=*datos;
    *datos=suma;
    
}
    return printf("Promedio: %.2f",suma/n);
    

    
    
}
