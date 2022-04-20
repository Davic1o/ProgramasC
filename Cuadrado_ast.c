#include <stdio.h>

int main(){
    int i,n,j,k;
    printf("Contorno de cuadrado con asteriscos\n");
    printf("Ingrese el lado: ");
    scanf("%d",&n);
    if(n==1){
    printf("*");
    }else{
        for(i=1;i<=n;i++){
        printf("*");
    }
    for(j=1;j<=(n-2);j++){
    printf("\n");
        printf("*");
    for(k=1;k<=(n-2);k++){
        printf(" ");
        }
    printf("*");
    }
    printf("\n");
     for(i=1;i<=n;i++){
        printf("*");
    }}
return 0;
}
