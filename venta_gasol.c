#include <stdio.h>
int main(){
float peso, valorp;
int tipo_gas,cantidad;
char unidad;


printf("VENTA DE GASOLINA\n");
printf("Indique el tipo de gasolina que desea:\nRegular (digite 1)\nEspecial (digite 2)\n ");
scanf("%d%*c",&tipo_gas);
printf("Ingrese la cantidad de gasolina que desea junto con su unidad (l/g)\n");
scanf("%d %c",&cantidad,&unidad);
switch(unidad){
    case 'l': 
            switch(tipo_gas){
                case 1: valorp=(0.264172*cantidad)*2.071;
                printf("Por %d litros de gasolina regular usted debe pagar %.1f ",cantidad,valorp);break;
                case 2: valorp=(0.264172*cantidad)*2.661;
                printf("Por %d litros de gasolina especial usted debe pagar %.1f ",cantidad,valorp);break;
            }break;
    case 'g':
            switch(tipo_gas){
                case 1: valorp=cantidad*2.071;
                printf("Por %d galones de gasolina regular usted debe pagar %.1f",cantidad,valorp);break;
                case 2: valorp=cantidad*2.661;
                printf("Por %d galones de gasolina especial usted debe pagar %.1f",cantidad,valorp);break;
            }break;
    }
return 0;
}
