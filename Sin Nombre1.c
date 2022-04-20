#include<stdio.h>
void main(){
    int i,j,base;
    printf("Piramide de asteriscos\n");
    do{
        printf("Ingrese la base: ");
        scanf("%d",&base);
    }
    while(base<1 && !(base%2=0));
    
     for(i=0;i<=base;i++){
        for(j=0;j<base-i;j++){
            printf(" ");
    }
    
    for(j=0;j<2*i-base;j++){
        printf("*");
    }
    printf("\n");
    }
}
