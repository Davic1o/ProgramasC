#include<stdio.h>
#define max 20
int longitudContrasenia(char contrasenia[]); //Funcion que calcula la longitud de la contrasenia, ayuda a determinar si es valida o no
int main(){
    char contrasenia[max];
    printf("Verificacion de contrasenia");
    printf("\nIngrese la contrasenia: ");
    scanf("%s",contrasenia);

    if(longitudContrasenia(contrasenia)>=5)
    printf("valida");
    else
     printf("invalida");
    return 0;
}
int longitudContrasenia(char contrasenia[]){
    int i=0;
    do
    {
        i++;
    } while (contrasenia[i]!='\0');
    
return i;
}
