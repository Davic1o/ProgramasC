# include <stdio.h>

int main(){

    int AN, mn, AA, ma;
    int MES, EDAD;
    printf("Edad en anios y meses\n");
    printf("Ingrese anio y mes de nacimiento: ");
    scanf("%d%*c %d%*c" ,&AN ,&mn);
    printf("Ingrese anio y mes de actuales: ");
    scanf("%d%*c %d%*c" ,&AA ,&ma);
    EDAD = ((((AA*12)+ma)-((AN*12)+mn))/12);
    MES = (((AA*12)+ma)-((AN*12)+mn))-(EDAD*12);
    printf("Edad: %d anios y %d meses",EDAD,MES);
    return 0;
}
