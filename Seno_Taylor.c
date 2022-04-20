#include<stdio.h>
#include<math.h>
#define LONG_VECTOR 10

int validar (int n);
void ingresarValores(float V[], int d);
void imprimirValores(float V[],int n);
void senoTaylorVector(float VI[],float sen[],int n,int t);
double Sumatoria(double n, int terminos);
double factorial(int num);

int main(){
    int  n, terminos;
    float seno[LONG_VECTOR],valores[LONG_VECTOR];
    printf("Ingrese la dimension: ");
    scanf("%d", &n);
     if(validar(n)==1){
        printf("Error: Numero no valido!");
   }else{
    
    printf("Ingreso de valores: \n");
    ingresarValores(valores, n);
    printf("Ingreso el numero de terminos: \n");
    scanf("%d", &terminos);
    printf("\nVector ingresado: \n");
    imprimirValores(valores, n);
    printf("\nVector seno Taylor: \n");
    senoTaylorVector(valores, seno, n, terminos);
    imprimirValores( seno, n);
}
   
    return 0;
}

int validar (int n){
if (n>=10 || n<0){
return 1;
}else{
    return 0;
}}

void ingresarValores(float V[], int d){
    int i;

    for(i=0;i<d;i++){
        printf("valor[%d]: ",i);
        scanf("%f%*c",&V[i]);
    }
}

void imprimirValores(float V[],int n){
        int i;
    for(i=0;i<n;i++){
        printf("[%.2f] ",V[i]);
}}
double factorial(int num){
    double fact;
    int i;
    fact=1;
     for(i=1;i<=num;i++){              
        fact = fact*i;
}
return fact;
}

double Sumatoria(double n, int terminos){

    double sen=0;
    int i;
        for(i=0;i<=terminos;i++){
    
    sen=sen+(pow(-1,i)*pow(n,((2*i)+1))/factorial((2*i)+1));
   }
return sen;
}

void senoTaylorVector(float VI[],float sen[],int n,int t){
     int i;
     for (i=0;i<n;i++){
         sen[i]=Sumatoria(VI[i],t);
     }
}


