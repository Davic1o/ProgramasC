#include <stdio.h>
#include <string.h>
#include <math.h>

#define LONG_EST 40
#define LONG_NOTA 4



typedef struct{
char Est[LONG_EST];
float nota1;
float nota2;
}pasa;


void aprueba(pasa est[LONG_NOTA]);
void leer( pasa est[LONG_NOTA]);

int main(){
    pasa Est[LONG_NOTA];
    printf("Reporte de Calificaciones\n");
    printf("\nIngrese los datos de los estudiantes:\n");
    leer(Est);
    printf("Estudiantes aprobados:\n");
    aprueba(Est);

    return 0;
}

void aprueba(pasa est[LONG_NOTA]){    
int i;
for(i=0;i<4;i++){
    if(est[i].nota2+est[i].nota1>=14.0){
        printf("%s-%.1f\n",est[i].Est,(est[i].nota2+est[i].nota1));
    }
    
}
}

    void leer( pasa est[LONG_NOTA]){
    int i;    
for (i = 0; i < 4; i++){
    printf("nombre [%d]: ",i);
    scanf("%s",est[i].Est);
    printf("nota1[%d]: ",i);
    scanf("%f%*c",&est[i].nota1);
    printf("nota2[%d]: ",i);
    scanf("%f%*c",&est[i].nota2);
    }

}

