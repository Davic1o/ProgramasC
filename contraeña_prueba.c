# include<string.h>
#include<stdio.h>

#define max 50
int minuscula(char *pa);
int mayuscula(char *pa);
int numero(char *pa);
int caracter(char *pa);
int espacio(char *pa);
int largo(char *pa);

int main(){
    char frase[max];
do
{+
    printf("Ingrese la clave:");
    fgets(frase,max,stdin);
    
if (strlen(frase)>8)
{
    if (mayuscula(frase)==0)
        {
        printf("La clave debe tener al menos una mayuscula\n");
        }


    if (minuscula(frase)==0)
            {
            printf("La clave debe tener al menos una minuscula\n");
            }

    if (espacio(frase)==0)
        {
        printf("La clave no debe tener espacios\n");
        }


    if (numero(frase)==0)
        {
        printf("La clave debe tener al menos un numero\n");
        }


    if (caracter(frase)==0)
        {
        printf("La clave debe tener al menos un simbolo\n");
        }     

        if(mayuscula(frase)== 1 && 
        minuscula(frase)== 1 && 
        caracter(frase)== 1 &&
         espacio(frase)== 1 && 
         numero(frase)==1){
        printf("Clave correcta");

        }

}
else{
    printf("La clave debe tener al menos 8 caracteres\n");
}



}while (minuscula(frase) == 0 ||
 mayuscula(frase)== 0
|| numero(frase)== 0
|| caracter(frase)== 0
|| largo(frase)== 0 
|| espacio(frase)== 0  );

  
return 0;
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

int numero(char *pa){
	int i;

    for (i = 0; i < strlen(pa); i++)
    {
    
          if(*(pa+i) >= '0' && *(pa+i)<= '9')
          {
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


int largo(char *pa){

   if (strlen(pa)>7)
   {
       return 1;
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
