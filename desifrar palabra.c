#include<stdio.h>
#include <string.h>
#define max 100
void descrifrarPalabra(char *palabra, char *palabraDescifrada);

int main(){
    char palabra[max], palabraDescrifrada[max];
    printf("Descifrar palabra\n");
    printf("Ingrese la palabra cifrada: ");
    scanf("%s",palabra);
    descrifrarPalabra(palabra, palabraDescrifrada);
    printf("Palabra descifrada: %s", palabraDescrifrada);

}

void descrifrarPalabra(char *palabra, char *palabraDescifrada){
    
    int i=0,j=0;
 
for (int i = 0; i < strlen(palabra); i++)
{
   if(*(palabra+i)>=48 && *(palabra+i)<=53){
           (palabraDescifrada+j)=(palabra+i-1) ;
            j++;
       }
}
      
      palabraDescifrada[strlen(palabraDescifrada)]='\0';
  // strcat(*(palabraDescifrada+j),'\0');
 

   //printf("%s",palabraDescifrada);
}
