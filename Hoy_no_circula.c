#include <stdio.h>
    int main(){
    int placa;
    char dia;  
    printf("SISTEMA HOY NO CIRCULA \n");
        printf("Ultimo digito de la placa: ");
        scanf("%d%*c",&placa);
            if(placa < 10 ){
            printf("Dia de la semana:\n(L)unes\n(M)artes\nM(i)ercoles\n(J)ueves\n(V)iernes\n");
            scanf("%c%*c",&dia);
                switch(dia){
                    case 'L':
                    switch (placa) {
                        case 0: printf ("Hoy SI puede circular");break;
                        case 2: printf ("Hoy SI puede circular");break;
                        case 3: printf ("Hoy SI puede circular");break;
                        case 4: printf ("Hoy SI puede circular");break;
                        default: printf("Hoy NO puede circular");
                        }break;
                    case 'M':
                    switch (placa) {
                        case 2: printf ("Hoy NO puede circular");break;
                        case 3: printf ("Hoy NO puede circular");break;
                        case 4: printf ("Hoy NO puede circular");break;
                        case 5: printf ("Hoy NO puede circular");break;
                        default: printf("Hoy SI puede circular");
                        }break;
                    case 'i':
                    switch (placa) {
                        case 4: printf ("Hoy NO puede circular");break;
                        case 5: printf ("Hoy NO puede circular");break;
                        case 6: printf ("Hoy NO puede circular");break;
                        case 7: printf ("Hoy NO puede circular");break;
                        default: printf("Hoy SI puede circular");
                        }break;
                    case 'J':
                    switch (placa) {
                        case 6: printf ("Hoy NO puede circular");break;
                        case 7: printf ("Hoy NO puede circular");break;
                        case 8: printf ("Hoy NO puede circular");break;
                        case 9: printf ("Hoy NO puede circular");break;
                        default: printf("Hoy SI puede circular");
                        }break;
                    case 'V':
                    switch (placa) {
                        case 0: printf ("Hoy NO puede circular");break;
                        case 1: printf ("Hoy NO puede circular");break;
                        case 8: printf ("Hoy NO puede circular");break;
                        case 9: printf ("Hoy NO puede circular");break;
                        default: printf("Hoy SI puede circular");
                        }break;
                default:printf("Dia incorrecto!!");
                }    
            }else{
    printf("El digito debe estar entre 0 y 9!!");
    }
        return 0;
    } 
