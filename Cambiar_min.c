#include<stdio.h>


#define LONG_MAX 31                   // Longitud m�xima (definida como constante) para una cadena.


void todoMinuscula( char [], char []);// Prototipo de la funci�n, recibe dos cadenas como par�metros de entrada. 

int main(){


char cadenaOriginal[LONG_MAX], cadenaConvertida[LONG_MAX];// Declaraci�n de variables usando LONG_MAX.
printf("Ingrese la cadena de texto: ");
fgets(cadenaOriginal, LONG_MAX, stdin);         // Se lee una cadena de tama�o LONG_MAX desde STDIN

                                                // y se la almacena en la variable cadenaOriginal.
todoMinuscula(cadenaOriginal, cadenaConvertida);// Se pasa cadenaOriginal y cadenaConvertida. 

                                                // cadenaConvertida tendr� el texto en min�scula.

printf("Cadena convertida: %s", cadenaConvertida);
return 0;


}


void todoMinuscula( char cadenaOriginal[], char cadenaConvertida[]){


int i;                          // Lazo sobre la cadena, hasta que alcance el caracter nulo.
for(i=0; cadenaOriginal[i] != '\0'; i++){                                    


                            // Si la letra es may�scula, se la convertir�.


if(cadenaOriginal[i] >= 65 && cadenaOriginal[i] <= 90 ){ 

    cadenaConvertida[i] = cadenaOriginal[i] + 32;                                

continue;                            
}
cadenaConvertida[i] = cadenaOriginal[i]; 
}
}



