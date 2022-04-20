#include<stdio.h>

#include<math.h>

int main(){

    float a, b, c, discriminante, raiz1, raiz2, real, imaginaria;



    printf("Ingrese el coeficiente A: ");

    scanf("%f", &a);

    printf("Ingrese el coeficiente B: ");

    scanf("%f", &b);

    printf("Ingrese el coeficiente C: ");

    scanf("%f", &c);

    printf("Resultado para la ecuacion: %.2fx^2 + %.2fx + %.2f\n", a, b, c);

    discriminante = b*b - 4*a*c;

    if(discriminante == 0){

        raiz1 = -b/(2*a);

        printf("x1 = x2 = %.2f", raiz1);

    }else if(discriminante > 0){

        raiz1 = (-b + sqrt(discriminante))/(2*a);

        raiz2 = (-b - sqrt(discriminante))/(2*a);

        printf("x1 = %.2f\nx2 = %.2f", raiz1, raiz2);

    }else{

        real = -b/(2*a);

        imaginaria = sqrt(-discriminante)/(2*a);

        printf("x1 = %.2f + %.2fi\nx2 = %.2f - %.2fi", real, imaginaria, real, imaginaria);

    }

   return 0;

}
