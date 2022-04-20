#include <stdio.h>

int main(){
    int x=0,y=1,z,d=1,e=0,n,i;
    printf("Serie de Fibonacci\n");
    printf("Ingrese cantidad de terminos: ");
    scanf("%d",&n);
    if(n>1){
    printf("Resultado: 0 1 ");
    for(i=0;i<=(n-3);i++){
        z=x+y;
        x=y;
        y=z;
        printf("%d ",z);
    }
    }else{
        printf("Resultado: 0");
    }
    
    
    
    return 0;
}
