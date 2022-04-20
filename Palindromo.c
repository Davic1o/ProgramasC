#include<stdio.h>
#define LONG_MAX 51  // Longitud m�xima de una cadena

char esPalindromo(char []); // Funci�n que verifica si una frase es un pal�ndromo. 

                            // Recibe como argumento de entrada la cadena de texto a verificar.

 // Retorna 's' si la frase es un pal�ndromo, 'n' en caso contrario.

int longitudCadena(char[]); // Funci�n que retorna un n�mero entero con la longitud de la cadena.

 // Recibe como argumento de entrada la cadena de texto sobre la que se calcula la longitud. 

void eliminarEspacios(char [], char []); // Funci�n que elimina los espacios de una cadena y el <<ENTER>> que a�ade fgets al leer una cadena.

 // Recibe dos argumentos de entrada: el primero, es la cadena original; el segundo, almacenar� la cadena sin espacios. 

main(){

char cadena[LONG_MAX];  
printf("Ingrese la cadena: "); 
fgets(cadena, LONG_MAX, stdin); // Se lee la cadena de texto ingresada por el usuario.

 // La funci�n fgets recibe 3 argumentos de entrada: el primero, es la variable en donde se  almacenar� el texto le�do;

 // el 2� es la cantidad m�xima de bytes a leer (se evita violaciones de acceso a bytes de memoria no reservados;

 // el 3� es el flujo desde donde vamos a leer los datos (stdin indica que se leer� desde el teclado).

 // Adem�s, ten en cuenta que est� funci�n almacena el caracter <<ENTER>> al final del texto ingresado. 

if(esPalindromo(cadena) == 's'){ //Si la funci�n esPalindromo retorna 's', entonces  la frase es un pal�ndromo. 

printf("Es palindromo");

}else{  //Caso contrario, no es pal�ndromo. 

printf("No es palindromo");

}

}

char esPalindromo(char cadena[]){

int i;  

char cadenaSinEspacios[LONG_MAX];      // Variable auxiliar que almacenar� el texto sin espacios. 

// Se llama la funci�n que elimina los espacios y lo almacenamos en la variable cadenaSinEspacios.

eliminarEspacios(cadena, cadenaSinEspacios); 

int l = longitudCadena(cadenaSinEspacios); // Se obtiene la longitud de la cadena sin espacios. 

for(i=0; i <= l/2; i++){                   // Se itera L/2 veces. 

    // Se comparan los caracteres: el 1� con el �ltimo, el segundo con el pen�ltimo, etc.

    // El sub�ndice [l-i-1] resta 1 porque los sub�ndices inician en 0 hasta la longitud menos 1. 

if(cadenaSinEspacios[i] != cadenaSinEspacios[l-i-1]){  

return 'n';        // Si los caracteres comparados son diferentes, 

                   // entonces no es un pal�ndromo y retornamos 'n' (finaliza el lazo).


}

}

return 's';               // Si se llega al final de las iteraciones, implica que todos los

                          // caracteres comparados fueron iguales; por lo tanto es un pal�ndromo. 

}

int longitudCadena(char cadena[]){

int longitud = 0, i = 0;  // La variable longitud almacenar� el tama�o de la cadena. 

while(cadena[i] != 0){    // Se recorre el vector hasta encontrar un caracter NULO. 

longitud++;           // Se incrementa la variable que almacena el tama�o del vector. 
i++;                  // Avanzamos al siguiente caracter. 

}
return longitud; //Se retorna el tama�o del vector. 

}

void eliminarEspacios(char cadenaOriginal[], char cadenaSinEspacios[]){

int i, j = 0;  // i es el sub�ndice de la cadena original, y j el de la cadena sin espacios. 

for(i = 0; cadenaOriginal[i] != 0 ; i++){  // Se recorre la cadena.

if(cadenaOriginal[i] != 32){           // Si el caracter de cadenaOriginal es diferente a ESPACIO 

                                       // (ASCII 32), se copia en la cadena sin espacios. 

cadenaSinEspacios[j] = cadenaOriginal[i];
j++;                               // Se incrementa el sub�ndice de la cadena sin espacios. 

}

}
cadenaSinEspacios[j-1] = 0;               // Se elimina el ENTER que a�ade la funci�n fgets. 

}
