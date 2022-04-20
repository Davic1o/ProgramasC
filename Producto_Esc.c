#include<stdio.h>
//Ingresa tu código aquí
#define LONG_MAX 10

int validar (int n);
void obtenerValores(int v[], int n);
void ImprimirValores(int v[], int n);
int multiplicar(int n, int v1[], int v2[]);
int main(){
    int n1,t1,t2,n2;
    int v1[LONG_MAX],v2[LONG_MAX];
    printf("Producto escalar de vector");
    printf("\nIngrese la dimension del Primer Vector:\n");
    scanf("%d",&n1);
    printf("\nIngrese la dimension del Segundo Vector:\n");
    scanf("%d", &n2);
    if((validar(n1) ==0)||(validar(n2) ==0)){
        printf("DIMENSION DE VECTORES INVALIDA");
    }
    else{
        if(n1==n2){
        printf("Ingrese los valores del Primer Vector:\n");
        obtenerValores(v1,n1);
        printf("Valores del Primer Vector:\n");
        printf("Vector 1 =[");
        ImprimirValores(v1,n1);

        printf("\nIngrese los valores del Segundo Vector:\n");
        obtenerValores(v2,n2);
        printf("Valores del Segundo Vector:\n");
        printf("Vector 2 =[");
        ImprimirValores(v2,n2);

        printf("\nEl producto escalar es: [%d]", multiplicar(n1,v1,v2));
        }

    else {printf("La dimension de v1 y v2 no coinciden");}
        }
   return 0;
}
//Ingresa tu código aquí

int validar (int n){
    if(n<=0){   
        return 0;
    }else{
        return 1;
}}
void obtenerValores(int v[], int n){
    int i;
    for(i=0; i<n;i++){
        printf("vector [%d]= ",i);
        scanf("%d",&v[i]);
    }
}
void ImprimirValores(int v[], int n){
int i;
for(i=0;i<n;i++){
    printf(" %d",v[i]);
}
    printf(" ]");
    
}
int multiplicar(int n, int v1[], int v2[]){
    int i, acum=0;
    for(i=0;i<n;i++){
        acum+=v1[i]*v2[i];
    }
    return acum;
    
}


