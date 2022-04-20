#include <stdio.h>
int triangulo(int, int, int);
float area(int, int, int);
int main(){
    double S;
    float x,y,z;
printf("Ingrese la longitud de los tres lados: ");
scanf("%f %f %f",&x,&y,&z);
        if ((triangulo(x,y,z))==1){ 
        printf("El area del triangulo es: %.2f",area(x,y,z));
        }else{
        printf("No se puede formar un triangulo!!");
        }
return 0;
}
int triangulo(int a, int b, int c){
    int M,N,O;
    M=a+b;
    N=b+c;
    O=c+a;
if((M>c)&&(N>a)&&(O>b))
{return 1;}
else
{return 0;}
}
float area(int a, int b, int c){
    float p,R,A,B;
        p=((a+b+c)/2);    
        R=((p*(p-a)*(p-b)*(p-c)));
        A=R/2;
        B=0;
       while (A!=B){
           B=A;
           A=(R/B+B)/2;
       }
        return A;
}
