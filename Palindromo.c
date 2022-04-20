#include<stdio.h>
#define LONG_MAX 51  // Longitud máxima de una cadena

char esPalindromo(char []); // Función que verifica si una frase es un palíndromo. 

                            // Recibe como argumento de entrada la cadena de texto a verificar.

 // Retorna 's' si la frase es un palíndromo, 'n' en caso contrario.

int longitudCadena(char[]); // Función que retorna un número entero con la longitud de la cadena.

 // Recibe como argumento de entrada la cadena de texto sobre la que se calcula la longitud. 

void eliminarEspacios(char [], char []); // Función que elimina los espacios de una cadena y el <<ENTER>> que añade fgets al leer una cadena.

 // Recibe dos argumentos de entrada: el primero, es la cadena original; el segundo, almacenará la cadena sin espacios. 

main(){

char cadena[LONG_MAX];  
printf("Ingrese la cadena: "); 
fgets(cadena, LONG_MAX, stdin); // Se lee la cadena de texto ingresada por el usuario.

 // La función fgets recibe 3 argumentos de entrada: el primero, es la variable en donde se  almacenará el texto leído;

 // el 2º es la cantidad máxima de bytes a leer (se evita violaciones de acceso a bytes de memoria no reservados;

 // el 3º es el flujo desde donde vamos a leer los datos (stdin indica que se leerá desde el teclado).

 // Además, ten en cuenta que está función almacena el caracter <<ENTER>> al final del texto ingresado. 

if(esPalindromo(cadena) == 's'){ //Si la función esPalindromo retorna 's', entonces  la frase es un palíndromo. 

printf("Es palindromo");

}else{  //Caso contrario, no es palíndromo. 

printf("No es palindromo");

}

}

char esPalindromo(char cadena[]){

int i;  

char cadenaSinEspacios[LONG_MAX];      // Variable auxiliar que almacenará el texto sin espacios. 

// Se llama la función que elimina los espacios y lo almacenamos en la variable cadenaSinEspacios.

eliminarEspacios(cadena, cadenaSinEspacios); 

int l = longitudCadena(cadenaSinEspacios); // Se obtiene la longitud de la cadena sin espacios. 

for(i=0; i <= l/2; i++){                   // Se itera L/2 veces. 

    // Se comparan los caracteres: el 1º con el último, el segundo con el penúltimo, etc.

    // El subíndice [l-i-1] resta 1 porque los subíndices inician en 0 hasta la longitud menos 1. 

if(cadenaSinEspacios[i] != cadenaSinEspacios[l-i-1]){  

return 'n';        // Si los caracteres comparados son diferentes, 

                   // entonces no es un palíndromo y retornamos 'n' (finaliza el lazo).


}

}

return 's';               // Si se llega al final de las iteraciones, implica que todos los

                          // caracteres comparados fueron iguales; por lo tanto es un palíndromo. 

}

int longitudCadena(char cadena[]){

int longitud = 0, i = 0;  // La variable longitud almacenará el tamaño de la cadena. 

while(cadena[i] != 0){    // Se recorre el vector hasta encontrar un caracter NULO. 

longitud++;           // Se incrementa la variable que almacena el tamaño del vector. 
i++;                  // Avanzamos al siguiente caracter. 

}
return longitud; //Se retorna el tamaño del vector. 

}

void eliminarEspacios(char cadenaOriginal[], char cadenaSinEspacios[]){

int i, j = 0;  // i es el subíndice de la cadena original, y j el de la cadena sin espacios. 

for(i = 0; cadenaOriginal[i] != 0 ; i++){  // Se recorre la cadena.

if(cadenaOriginal[i] != 32){           // Si el caracter de cadenaOriginal es diferente a ESPACIO 

                                       // (ASCII 32), se copia en la cadena sin espacios. 

cadenaSinEspacios[j] = cadenaOriginal[i];
j++;                               // Se incrementa el subíndice de la cadena sin espacios. 

}

}
cadenaSinEspacios[j-1] = 0;               // Se elimina el ENTER que añade la función fgets. 

}
