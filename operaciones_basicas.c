#include <stdio.h>

float suma(float,float);
    float resta(float,float);
    float multiplicacion(float,float);
    float division(float,float);
    int resto(int,int);

int main(){
    float n1, n2;
    //declarar variables
    //leo datos
    //invocar funciones
    //imprimir resultado
    printf("Ingrese numero 1 y numero 2 separado por un espacio:");
    scanf("%f %f",&n1,&n2);
    printf("Suma: %.2f, Resta: %.2f, Multiplicacion: %.2f, Division: %.2f, Residuo: %.2f",suma(n1,n2),resta(n1,n2),multiplicacion(n1,n2),division(n1,n2),(float)resto((int)n1,(int)n2));
    return 0;
}
//definicion de funciones
float suma(float n1,float n2){
    return n1+n2;
    }
    float resta(float n1,float n2){
    
    return n1-n2;
    }
    float multiplicacion(float n1,float n2){
    return n1*n2;  
    }
    float division(float n1,float n2){
    return n1/n2;   
    }
    
    int resto(int n1,int n2){
    return n1%n2;   
    }
