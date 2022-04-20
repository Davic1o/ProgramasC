#include <stdio.h>
#include <math.h>
#include <string.h>
#define MAXNOMB 40
#define MAXLET 20

typedef struct 
{
char nombre [MAXNOMB];
float notas[4];  
}estudiante;

void leer( estudiante e[], int n);
void TODOS( estudiante e[],int n);
void aprobados( estudiante e[]);
void suspenso( estudiante e[]);
void reprobados( estudiante e[]);

int main()
{
int n;
char opciones;
    estudiante estudiantes [MAXLET];  
    strcpy(estudiantes[0].nombre,"Juan");
     estudiantes[0].notas[0] =9.30;
     estudiantes[0].notas[1] =8.70;
     estudiantes[0].notas[2] =8.70;
    estudiantes[0].notas[3] =7.67;

 strcpy(estudiantes[1].nombre,"Pedro");
     estudiantes[1].notas[0] =5.30;
     estudiantes[1].notas[1] =6.70;
     estudiantes[1].notas[2] =7.00;
    estudiantes[1].notas[3] =6.33;

strcpy(estudiantes[2].nombre,"Luis");
     estudiantes[2].notas[0] =4.10;
     estudiantes[2].notas[1] =2.50;
     estudiantes[2].notas[2] =3.00;
    estudiantes[2].notas[3] =3.20
;

    printf("ESTUDIANTES DE REALIDAD NACIONAL\n");
    printf("Ingrese el numero de estudiantes : ");
    scanf("%d%*c",&n);
    leer( estudiantes,n);

do{
    printf("Seleccione lo que desea listar:\n");
     printf("a. Todos los registros\nb. Estudiantes aprobados\nc. Estudiantes suspensos\nd. Estudiantes reprobados\ne. Salir \n");
    scanf("%c%*c",&opciones);

        switch (opciones){
        case 'a':
        	TODOS(estudiantes,n);
            break;
        case 'b':
            aprobados(estudiantes);
            break;  
         case 'c':
            suspenso(estudiantes);
			break;
        case 'd':
        	reprobados(estudiantes);
            break;
        default:
            opciones=='e';
            break;
        }
    }while(opciones!='e');

    return 0;
}

void leer( estudiante e[], int n){
	int i,j;
for (i = 0; i < n; i++) {
       printf("Nombre [%d]: ",i+3);
         scanf("%s",e[i+3].nombre);

        for (j = 0; j < 3; j++){
           printf("Nota [%d]: ",j); 
            scanf("%f%*c",&e[i+3].notas[j]);
        }
        
        e[i+3].notas[3]=(e[i+3].notas[0]+e[i+3].notas[1]+e[i+3].notas[2])/3;
    }

}
void TODOS( estudiante e[], int n){
int i;
    printf("\nNombre		Nota 1	Nota 2	Nota 3	Prom.\n");
    printf("-----------------------------------------\n");
for (i = 0; i < (n+3); i++){
            printf("%s		%.2f	%.2f	%.2f	%.2f\n",e[i].nombre,e[i].notas[0],e[i].notas[1],e[i].notas[2],e[i].notas[3]);
       } 
    }

void aprobados( estudiante e[]){
int i;
    printf("\nNombre		Nota 1	Nota 2	Nota 3	Prom.\n");
    printf("-----------------------------------------\n");
for (i = 0; i < 10; i++){
       if (e[i].notas[3]>= 7.0){
            printf("%s		%.2f	%.2f	%.2f	%.2f\n",e[i].nombre,e[i].notas[0],e[i].notas[1],
            e[i].notas[2],
            e[i].notas[3]
            );
       }
       
    }

}

void suspenso( estudiante e[]){
	int i;

    printf("\nNombre		Nota 1	Nota 2	Nota 3	Prom.\n");
    printf("-----------------------------------------\n");
for (i = 0; i < 10; i++){
       if (e[i].notas[3]<= 7.0&&e[i].notas[3]>= 5.0){
            printf("%s		%.2f	%.2f	%.2f	%.2f\n",e[i].nombre,e[i].notas[0],e[i].notas[1],e[i].notas[2],e[i].notas[3]);
       }
    }
}

void reprobados( estudiante e[]){
	int i;

    printf("\nNombre		Nota 1	Nota 2	Nota 3	Prom.\n");
    printf("-----------------------------------------\n");
for (i = 0; i < 10; i++){
       if (e[i].notas[3]< 5.0){
            printf("%s		%.2f	%.2f	%.2f	%.2f\n",e[i].nombre,e[i].notas[0],e[i].notas[1],e[i].notas[2],e[i].notas[3]
            );
       }
       
    }

}
