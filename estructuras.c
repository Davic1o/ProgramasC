#include <stdio.h>
#include <string.h>
#define LET 30
#define NUM 50
typedef struct{
	char fecha[LET];
	int asunto[LET];
	int debe[NUM];
	int haber[NUM];
	int saldo[NUM];
}libroD;

int main(){
int i,n;
char fecha[LET];
printf("¿Cuantos datos desea ingresar?");
scanf("%d%*c",&n);
for(i=1;i<=n;i++){
	
	printf("ingrese la fecha %d \n",i);
fgets(fecha,LET,stdin);
}	

	printf("fecha es %s \n",*fecha);
 
	
	return 0;
}
