#include<stdio.h>

int main(){

    int n, num, i=0, mayor;                // La variable i servir� de contador y tendr� los valores de 0 a n-1.
    printf("Mayor de n numeros");
    printf("\nCantidad de numeros: ");
    scanf("%d", &n);
    
    printf("Ingrese numero %d: ", i);         
    scanf("%d", &num);
    mayor=num;                             // Como se asume que se ingresar� al menos un n�mero, ese primer n�mero es el mayor.
    
    for(i=1;i<n;i++){                      // El lazo va desde el siguiente valor de i hasta n-1.
        
        printf("Ingrese numero %d: ", i);  // Se pide que se ingresen los siguientes n�meros.
        scanf("%d", &num);
        
        if (num>mayor){                   // Si el nuevo n�mero ingresado es mayor que el mayor existente,
            mayor = num;                   // Entonces hay un nuevo mayor. Esto suceder� cada vez que se inngrese un n�mero.
        }
    }
    printf("Mayor numero: %d", mayor);     // A la salida del lazo, se devuelve el valor mayor.
    
    return 0;
}
