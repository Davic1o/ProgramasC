#include<stdio.h>

int main(){

    int n, num, i=0, mayor;                // La variable i servirá de contador y tendrá los valores de 0 a n-1.
    printf("Mayor de n numeros");
    printf("\nCantidad de numeros: ");
    scanf("%d", &n);
    
    printf("Ingrese numero %d: ", i);         
    scanf("%d", &num);
    mayor=num;                             // Como se asume que se ingresará al menos un número, ese primer número es el mayor.
    
    for(i=1;i<n;i++){                      // El lazo va desde el siguiente valor de i hasta n-1.
        
        printf("Ingrese numero %d: ", i);  // Se pide que se ingresen los siguientes números.
        scanf("%d", &num);
        
        if (num>mayor){                   // Si el nuevo número ingresado es mayor que el mayor existente,
            mayor = num;                   // Entonces hay un nuevo mayor. Esto sucederá cada vez que se inngrese un número.
        }
    }
    printf("Mayor numero: %d", mayor);     // A la salida del lazo, se devuelve el valor mayor.
    
    return 0;
}
