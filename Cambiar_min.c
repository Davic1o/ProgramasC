#include<stdio.h>


#define LONG_MAX 31                   // Longitud máxima (definida como constante) para una cadena.


void todoMinuscula( char [], char []);// Prototipo de la función, recibe dos cadenas como parámetros de entrada. 

int main(){


char cadenaOriginal[LONG_MAX], cadenaConvertida[LONG_MAX];// Declaración de variables usando LONG_MAX.
printf("Ingrese la cadena de texto: ");
fgets(cadenaOriginal, LONG_MAX, stdin);         // Se lee una cadena de tamaño LONG_MAX desde STDIN

                                                // y se la almacena en la variable cadenaOriginal.
todoMinuscula(cadenaOriginal, cadenaConvertida);// Se pasa cadenaOriginal y cadenaConvertida. 

                                                // cadenaConvertida tendrá el texto en minúscula.

printf("Cadena convertida: %s", cadenaConvertida);
return 0;


}


void todoMinuscula( char cadenaOriginal[], char cadenaConvertida[]){


int i;                          // Lazo sobre la cadena, hasta que alcance el caracter nulo.
for(i=0; cadenaOriginal[i] != '\0'; i++){                                    


                            // Si la letra es mayúscula, se la convertirá.


if(cadenaOriginal[i] >= 65 && cadenaOriginal[i] <= 90 ){ 

    cadenaConvertida[i] = cadenaOriginal[i] + 32;                                

continue;                            
}
cadenaConvertida[i] = cadenaOriginal[i]; 
}
}



