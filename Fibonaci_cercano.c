#include <stdio.h>

int main(){
    int n, pen=0, ul=1, nue,x,y;
    printf("Ingrese un numero: ");
    scanf("%d",&n);
    if(n==0){
        printf("SI");
    }else{ 
        do{
        nue=ul+pen;
        pen=ul;
        ul=nue;
    }while(nue<n);
    if (nue==n){
    printf("SI");
    }else{
    x=nue-n;
    y=n-pen;
    if(x>=y)
    printf("%d",pen);
        if(x<y)
        printf("%d",nue);
    }}
   
   
    
    return 0;
}
