#include <stdio.h>

int positivo (int);
void perfecto (int);
int leer();

int main(){
    int n;
    //declro variables
    //invoco la funcion leer
    do{
    n= leer();
    }while(!positivo(n));
 
    //invocar funcion perfecto e impimo el esultado si esperfecto 
    
    perfecto(n);
    
    return 0;
}
int leer(){
    int n;
    printf("Ingrese el numero: ");
    scanf("%d", &n);
    return n;
    
    
}
int positivo (int n){
    if(n>=0)
    return 1;
    else
        return 0;
    
    
}

void perfecto (int n){
    int suma=0,i;
    
    for(i=1;i<n;i++){
        if(n%i==0)
        suma += i;
        
        
    }
    if(suma==n)
    printf("SI\n");
    else
    printf("NO\n");
   return; 
}
