#include<stdio.h>
#define max 51
void cambio_mayusculas(char cadena[]);
int main(){
    char cadenaOriginal[max];
    int clave,i=0;
    printf("Cifrado de Cesar");
    printf("\nCadena original: ");
    fgets(cadenaOriginal,51,stdin);
    printf("clave: ");
    scanf("%d",&clave);

    cambio_mayusculas(cadenaOriginal);
     do
    {
    
        if(cadenaOriginal[i]!='\n'){

            if ((int)cadenaOriginal[i]==32)
                    {
                        printf(" ");
                    }
                    else  if (((int)cadenaOriginal[i]+clave)<=90 && (int)cadenaOriginal[i]!=32)
                    {
                        printf("%c",cadenaOriginal[i]+clave);
                    }
                    else 
                    {
                     printf("%c",64+(cadenaOriginal[i]+clave-90));
                    }
                /////
            
    
        }
         i++;
    } while (cadenaOriginal[i]!='\0');
    


    return 0;   
}

void cambio_mayusculas(char cadena[]){
int i=0;
 do {
        if (cadena[i]>='a'&& cadena[i]<='z')
        {
            cadena[i]=cadena[i]-32;
        }
        else if (cadena[i]>='A'&& cadena[i]<='Z')
        {
            cadena[i]=cadena[i];
        }
        else if (cadena[i]>=' ')
        {
            cadena[i]=' ';
        }
i++;
} while (cadena[i]!='\0');
}
