#include <stdio.h>
#define max 5

void leer(int *pdato);
void imprimir(int *pdato);
void sumar(int *a,int *b,int *c);
int main(){
    int A[max],B[max],C[max],i;
    printf("Ingrese datos del primer vector\n");
    leer(A);
    printf("Ingrese datos del segundo vector\n");
    leer(B);
    sumar(A,B,C);
    printf("Resultado:\n");
    imprimir(C);
    return 0;
}
void leer(int *pdato){
int i;
    for(i=0;i<max;i++){
    printf("[%d]:",i);
    scanf("%d",(pdato+i));
    }
}
void imprimir(int *pdato){
	int i;
  for(i=0;i<max;i++){
    printf("[%d]:%d\n",i,*(pdato+i));        
  }
}
void sumar(int *a,int *b,int *c){
	int i;
  for(i=0;i<max;i++){
    (c+i)=(a+i)+*(b+i);      
  }
}
