#include <stdio.h>
void incremento (int n, int c);
int main(){
    int a,i;
    printf("antes de la funcion incremento\n");
    scanf("%d",&a);
	printf("cuanto desea incrementar\n");
    scanf("%d",&i);
    incremento(a,i);
   
    return 0;
    
}
void incremento (int n, int c){
    int resultado;
	resultado=c+n++;
     printf("despues de la funcion incremento %d\n",resultado);
}
