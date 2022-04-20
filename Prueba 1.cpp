#include<stdio.h>
#include<string.h>
#define max 100


int MAYUS(char clave[]);
int minus(char clave[]);
int simb(char clave[]);
int num(char clave[]);
int Espacio(char clave[]);

int main(){
    char clave[max];
    do{
    printf("Ingrese la clave: ");
    fgets(clave,max,stdin);
    //printf("\n");
        if(strlen(clave)-1<8){
        printf("La clave debe tener al menos 8 caracteres\n");      
        }   
        else if(((MAYUS(clave)==0))||((simb(clave)==0))){
        printf("La clave debe tener al menos una mayuscula\n");
        printf("La clave debe tener al menos un simbolo\n");
        }
        else if((num(clave)==0)||(Espacio(clave)==0)){
        printf("La clave debe tener al menos un numero\n");
        printf("La clave no debe tener espacios\n");
        }
    }while((num(clave)==0)&&(strlen(clave)-1<8)&&(MAYUS(clave)==0)&&(minus(clave)==0)&&(simb(clave)==0)&&(Espacio(clave)==0));
    
    printf("Clave correcta");
    return 0;
}



int MAYUS(char clave[]){
int i,j=0;
    for (i = 0; i < strlen(clave); i++)
    {
    
          if(*(clave+i) >= 65 && *(clave+i)<= 90)
          {
              return 1;
          }
    }
    
return 0;
}
int minus(char clave[]){
int i,j=0;
    for (i = 0; i < strlen(clave); i++)
    {
    
          if(*(clave+i) >= 97 && *(clave+i)<= 122)
          {
              return 1;
          }
    }
    
return 0;
}
int simb(char clave[]){
int i,j=0;
    for (i = 0; i < strlen(clave); i++)
    {
    
          if(*(clave+i) >= 33 && *(clave+i)<= 47)
          {
              return 1;
          }
    }
    
return 0;
}
int num(char clave[]){
int i,j=0;
    for (i = 0; i < strlen(clave); i++)
    {
    
          if(*(clave+i) >= 48 && *(clave+i)<= 57)
          {
              return 1;
          }
    }
    
return 0;
}
int Espacio(char clave[]){
int i,j=0;
    for (i = 0; i < strlen(clave); i++)
    {
    
          if(*(clave+i) = 32)
          {
              return 1;
          }
    }
    
return 0;
}
