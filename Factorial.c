#include<stdio.h>

int main(){
    int num, i, fact;                  // Se usarán 3 variables que guardarán el número ingresado, el contador 
                                       // y la que guardará el resultado respectivamente.
    
    printf("Factorial de un numero");
    printf("Ingrese el numero: ");
    scanf("%d",&num);
    fact = 1;                          // Se inicializa la variable fact en 1 debido a que esta variable va acumulando 
                                       // y además es parte de un producto. Si fuese 0, la respuesta siempre sería 0.
    for(i=1;i<=num;i++){              // El algoritmo busca multiplicar los números desde 1 hasta num
        fact = fact*i;                 // Se multiplica el acumulador (fact) por el contador (i) y se almacena en el acumulador.
    }
    
    printf("Factorial: %d",fact);

    return 0;
}

