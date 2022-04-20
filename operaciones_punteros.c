#include<stdio.h>

void suma(float *x, float *y, float *z);
void multiplicacion(float *x, float *y, float *z);
void division(float x, float y, float *z);

int main(){
    float a, b, s,m,d;                  
    printf("Operaciones matematicas\n");
    printf("Ingrese los datos a operar: ");
    scanf("%f %f",&a, &b);
    suma(&a,&b,&s);
    multiplicacion(&a,&b,&m);
    division(a,b,&d);
    printf("%.2f %.2f %.2f",s,m,d); 
    return 0;
}
void suma(float *x, float *y, float*z){ 
    *z = *x+*y;                           
}
void multiplicacion(float *x, float *y, float *z){ 
    *z = *x**y;                           
}

void division(float x, float y, float *z){ 
     
    if(y==0){
     *z=0;   
    }else 
   *z = x / y ;

                              
}
