#include <stdio.h>
#include <string.h>
#define max 80
#define maxa 10


typedef struct 
{
char nom [max];
int ti; 
int tf; 
int total;   
}atleta;

int validarNumero(int n);
 void imprimiratletas(atleta *competencia , int n);
 void ingresarAtletas(atleta *competencia , int n);
 void total(atleta *competencia , int n);
 void ordenarValores(atleta *competencia , int n);

int main(){
    atleta competencia[maxa];
    int n;
    printf("Competencia atletica\n");
    printf("Ingrese el numero de atletas: ");
    scanf("%d", &n);
    if(validarNumero(n) == 0){
        printf("Numero invalido!");
    }else{
    ingresarAtletas(competencia, n);
    total(competencia, n);
    ordenarValores(competencia ,  n);
    printf("podio\n");
    imprimiratletas(competencia, n);
    }
}




int validarNumero(int n){
        if (n>0 && n<=10)
        return 1;
   return 0; 
}


void ingresarAtletas(atleta *competencia , int n){
	int i;
 for (i = 0; i < n; i++)
    {
       printf("Nombre [%d]: ",i);
         scanf("%s",competencia[i].nom);
         printf("Tiempo inicial[%d]: ",i);
         scanf("%d",&competencia[i].ti);
       printf("Tiempo final[%d]: ",i);
         scanf("%d",&competencia[i].tf);
         
    }
 
 }

 void imprimiratletas(atleta *competencia , int n){
     printf("Nombre\t   T.inicial\t   T.final\t  T.total");
     int i;
 for (i = 0; i < 3; i++)
    {
         printf("\n"); 
 printf("%s\t\t%d\t\t%d\t\t%d",competencia[i].nom,competencia[i].ti,competencia[i].tf,competencia[i].total);
     
     
    
    }
 
 }

 
void ordenarValores(atleta *competencia , int n){
   atleta min;
    int i,j;
	for (i = 0; i < n; i++)
    {
      for (j = i+1; j < n; j++)
      {
          if (competencia[j].total<competencia[i].total)
          {
                
              min=competencia[j];
              competencia[j]=competencia[i];
              competencia[i]=min;
          }
          
      }
    }
}

void total(atleta *competencia , int n){
	int i;
for (i = 0; i < n; i++)
    {   
     competencia[i].total=competencia[i].tf-competencia[i].ti;
     
    }
}
