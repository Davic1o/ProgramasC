#include<string.h>
#include<stdio.h>


#define CONT 30

int numero(char *pa);
int caracter(char *pa);
int espacio(char *pa);
int minuscula(char *pa);
int mayuscula(char *pa);
int largo(char *pa);

int main(){
    char contrasenia[CONT];
    printf("Ingrese la clave:");
    fgets(contrasenia,CONT,stdin);
    
if (strlen(contrasenia)>8){
    if (espacio(contrasenia)==0){
        printf("La clave no debe tener espacios\n");
        }

    if (mayuscula(contrasenia)==0){
            printf("La clave debe tener al menos una mayuscula\n");
            }

    if (numero(contrasenia)==0){
        printf("La clave debe tener al menos un numero\n");
        }


    if (minuscula(contrasenia)==0){
        printf("La clave debe tener al menos una minuscula\n");
        }

    if (caracter(contrasenia)==0){
        printf("La clave debe tener al menos un simbolo\n");
        }     

        if(espacio(contrasenia)== 1&& minuscula(contrasenia)== 1 && caracter(contrasenia)== 1 &&mayuscula(contrasenia)== 1&& numero(contrasenia)==1){
        printf("Clave correcta");

        }

}
else{
    printf("La clave debe tener al menos 8 caracteres \n");
}
  
return 0;
}

int numero(char *pa){
	int i;

    for (i = 0; i < strlen(pa); i++){
    
          if(*(pa+i) >= '0' && *(pa+i)<= '9'){
              return 1;
          }
    }
    
return 0;
}

int caracter(char *pa){
	int i;

    for (i = 0; i < strlen(pa); i++)
    {
    
          if(*(pa+i) >= '!' && *(pa+i)<= '/')
          {
              return 1;
          }
    }
    
return 0;
}

int espacio(char *pa){
	int i;

    for (i = 0; i < strlen(pa); i++)
    {
    
          if(*(pa+i) == 32)
          {
              return 0;
          }
    }
    
return 1;
}

int minuscula(char *pa){
	int i;
    for (i = 0; i < strlen(pa); i++)
    {
    
          if(*(pa+i) >= 'a' && *(pa+i)<= 'z')
          {
              return 1;
          }
    }
    
return 0;
}

int mayuscula(char *pa){
	int i;

    for (i = 0; i < strlen(pa); i++)
    {
    
          if(*(pa+i) >= 'A' && *(pa+i)<= 'Z')
          {
              return 1;
          }
    }
    
return 0;
}



int largo(char *pa){

   if (strlen(pa)>7)
   {
       return 1;
   }

return 0;
}


