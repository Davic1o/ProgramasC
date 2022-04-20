#include<stdio.h>

int main(){
    int num, i, fact;                  // Se usar�n 3 variables que guardar�n el n�mero ingresado, el contador 
                                       // y la que guardar� el resultado respectivamente.
    
    printf("Factorial de un numero");
    printf("Ingrese el numero: ");
    scanf("%d",&num);
    fact = 1;                          // Se inicializa la variable fact en 1 debido a que esta variable va acumulando 
                                       // y adem�s es parte de un producto. Si fuese 0, la respuesta siempre ser�a 0.
    for(i=1;i<=num;i++){              // El algoritmo busca multiplicar los n�meros desde 1 hasta num
        fact = fact*i;                 // Se multiplica el acumulador (fact) por el contador (i) y se almacena en el acumulador.
    }
    
    printf("Factorial: %d",fact);

    return 0;
}

