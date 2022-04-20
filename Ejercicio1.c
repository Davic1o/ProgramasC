#include <stdio.h>

int main(){
    int matriz[20][20];
    int fila,columna,fx,cx,i,j;
    float suma,promedio;
    printf("Ingrese numero de fila: ");
    scanf("%d",&fila);
    
    printf("Ingrese numero de columnas:  ");
    scanf("%d",&columna);
     
     printf("Ingrese los datos de la  matriz \n");
    for (i = 0; i < fila; i++){
        for (j = 0;  j< columna; j++){
            printf("Dato [%d][%d]= ",i+1,j+1);
            scanf("%d",&matriz[i][j]);
			}
    }
    
    printf("Matriz Dato\n");
	for (i = 0; i < fila; i++){
        for (j = 0;  j< columna; j++){
            printf("[%d]",matriz[i][j]);
            }
			printf("\n");
    }

    for (i = 0; i < fila; i++){
        for (j = 0;  j< columna; j++){
            suma+=matriz[i][j];
            }
	}
promedio=suma/(fila*columna);
 printf("\nPromedio de matriz dato : %.2f \n",promedio);
  int a = matriz[0][0];
    for (i = 0; i < fila; i++){
        for (j = 0;  j< columna; j++){
            suma+=matriz[i][j];
            if (a < matriz[i][j]) {
                a = matriz[i][j];
                fx=i;
                cx=j;
                }            
            }         
    }
    printf("Mayor de la matriz: %d\n",a);  
    printf("Posiscion  del mayor : [%d][%d]\n",fx+1,cx+1);
     return 0;}
