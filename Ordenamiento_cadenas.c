#include<stdio.h>
#include <ctype.h>
# include<string.h>

#define max 50
int  valoracion(char a[],char b[]);
int main(){
    int respuesta;
   char primer[max];
   char segundo[max];
    printf("Ordenamiento de 2 cadenas");
    printf("\nIngrese primer nombre: ");
    fgets(primer,max,stdin);
    printf("Ingrese segundo nombre: ");
    fgets(segundo,max,stdin);

    respuesta = valoracion(primer,segundo);
   if(respuesta == 0){
    printf("%s", segundo);
    printf("%s", primer);
   }else{
 printf("%s", primer);
  printf("%s", segundo);
   }
    return 0;
}
int  valoracion(char a[],char b[]){
	int i;
    for (i = 0; i <strlen(a); i++){
        if(a[i]<b[i]){                                        
            return 1;
            }
    }
return 0;
}
