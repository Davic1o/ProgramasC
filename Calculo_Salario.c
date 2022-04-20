#include <stdio.h>

int main() {
    int hT, hE;
    float des,salario;
    
    printf("Programa para calcular salario;\n");
    printf("ingrese catidad de horas trabajadas: ");
    scanf("%d",&hT);
    printf("ingrese cantidad de horas extras trabajadas: ");
    scanf("%d",&hE);
    printf("Ingrese los descuentos: ");
    scanf("%f",&des);
    salario= (hT*12.5)+(hE*15.5)-des;
    printf("Detalle de salario\n");
    printf("Horas trabajadas %d, horas extras %d, descuentos %.2f, salario %.2f",hT,hE,des,salario);

    return 0;
}
