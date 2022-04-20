#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define MAXEST 20
#define MAXC 40
typedef struct{
    
    char nombreEstudiante[MAXC];
    float nota1[3];
    float nota2[3];
    float nota3[3];
    }estudiantes;
int main(){
	estudiantes lista[MAXEST]={{"Juan",9.30,8.70,5.00},
                              {"Pedro",5.30,6.70,7.00},
                              {"Luis",4.10,2.50,3.00},
							  };
	printf("ESTUDIANTES DE REALIDAD NACIONAL\n");
	 int opcion;
	  do{
        printf("\nSeleciones lo que desea listar:");
        printf("\na. Todos los registros");
        printf("\nb. Estudiantes aprobados");
        printf("\nc. Estudiantes suspensos");
        printf("\nd. Estudiantes reporbados");
		printf("\ne. Salir\n");
        
        scanf("%d",&opcion);
	
	
	return 0;
}

