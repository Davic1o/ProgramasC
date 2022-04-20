#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define max 40
#define maxp 10
typedef struct 
{
char nom [max];
float pe;
float ta;
float imc;  
}paciente;

void imc(paciente pacientes[maxp], int n);
void leer(paciente pacientes[maxp], int n);
void inferior( paciente pacientes[], int n);
void normal (paciente pacientes[], int n);
void superior (paciente pacientes[], int n);
void obesidad (paciente pacientes[], int n);
  void imprimip(paciente pacientes[maxp] , int n);
int main()
{
   int n;
   char selec;
    paciente pacientes[maxp];
    printf("Salud Estudiantil EPN\n");
    printf("Ingrese el numero de pacientes:");
    scanf("%d",&n);
    leer(pacientes,n);
    printf("Seleccione el tipo de estado de pacientes a listar:\n");
    printf("a: pacientes con peso inferior al normal\n");
    printf("b: pacientes con peso normal\n");
    printf("c: pacientes con peso superior al normal\n");
    printf("d: pacientes con obesidad\n");
    scanf("\n%c",&selec);
    imc(pacientes,n);
    printf("\n");
    switch(selec){
        case 'a':
            inferior(pacientes,n);
            //imprimip( pacientes ,n);
            break;
        case 'b':
            normal(pacientes,n);
            break;
        case 'c':
            superior(pacientes,n);
            break;
        case'd':
            obesidad(pacientes,n);
            break;
        default:
            printf("\nSeleccion Invalida!");
    }

    return 0;
}


///LEER
void leer( paciente pacientes[maxp], int n){

for (int i = 0; i < n; i++)
    {
       
       printf("nombre [%d]: ",i);
         scanf("%s",pacientes[i].nom);
         printf("peso-KG[%d]: ",i);
         scanf("%f%*c",&pacientes[i].pe);
          printf("Altura-m[%d]: ",i);
         scanf("%f%*c",&pacientes[i].ta);
    }

}


/// IMC 
void imc(paciente pacientes[maxp], int n){
for (int i = 0; i < n; i++)
    {   
     pacientes[i].imc=pacientes[i].pe/pow(pacientes[i].ta,2);
     
    }
}


///INFERIOR

void inferior( paciente pacientes[maxp], int n){
    char inf[40]="";
    char nombre[40]="";
    char car[]=": Peso inferior al normal";

    for (int i = 0; i < n; i++)
    {
        if (pacientes[i].imc<18.5)
        {
            strcpy(nombre,pacientes[i].nom);
            strcpy(inf,strcat(nombre,car));
            printf("%s\n",inf);
        }
    }
    if(inf[0]=='\0'){  /// para comprobar si esta vacia
        printf("No existen pacientes con peso inferior al normal");
    }

}


///NORMAL
void normal ( paciente pacientes[], int n){
    char inf[40]="";
    char nombre[40]="";
    char car[]=": Peso normal";

for (int i = 0; i < n; i++)
{
    if (pacientes[i].imc> 18.5 && pacientes[i].imc<=24.9 )
    {
        strcpy(nombre,pacientes[i].nom);
        strcpy(inf,strcat(nombre,car));
        printf("%s\n",inf);
    }
}
if(inf[0]=='\0'){  /// para comprobar si esta vacia
    printf("No existen pacientes con peso normal");
}

}

//SUPERIOR

void superior (paciente pacientes[], int n){
char inf[40]="";
    char nombre[40]="";
    char car[]=": Peso superior al normal";

for (int i = 0; i < n; i++)
{
    if (pacientes[i].imc> 25.0 && pacientes[i].imc<=29.9 )
    {
        strcpy(nombre,pacientes[i].nom);
        strcpy(inf,strcat(nombre,car));
        printf("%s\n",inf);
    }
}
if(inf[0]=='\0'){  /// para comprobar si esta vacia
    printf("No existen pacientes con peso superior al normal");
}
}


/// obesidad
void obesidad ( paciente pacientes[], int n){
    char inf[40]="";
    char nombre[40]="";
    char car[]=": Obesidad";

for (int i = 0; i < n; i++)
{
    if (pacientes[i].imc>=30 )
    {
        strcpy(nombre,pacientes[i].nom);
        strcpy(inf,strcat(nombre,car));
        printf("%s\n",inf);
    }
}
if(inf[0]=='\0'){  /// para comprobar si esta vacia
    printf("No existen pacientes con Obesidad");
}

}
