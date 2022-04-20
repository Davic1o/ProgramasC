#include <stdio.h>

void imprimir(int *p);

void cambio(int *p);

int main(){
    int dato = 15;
    int *pdato;
    int lista[5] = {10,20,30,40,50};
    
    pdato = &dato;
    
    printf("Son direcciones: pdato = %p &dato =%p\n",pdato,&dato);
    printf("Son valores: *pdato = %d dato = %d\n",*pdato,dato);
    //*pdato =54;
    cambio(pdato);
    printf("Son valores: *pdato = %d ",dato);
    printf("La direccion del primer elemento del arreglo esta en \"lista\": %p\n",lista);
    printf("La direccion del primer elemento del arreglo esta en \"&lista[0]\": %p\n",&lista[0]); 
    printf("El valor de lista[0] es %d\n",*lista);
    printf("El valor de lista[1] es %d\n",*(lista+1));
    printf("El valor de lista[0] es %p\n",lista);
    printf("El valor de lista[1] es %p\n",(lista+1));
    printf("valores de arreglo");
    imprimir(lista);
    
    
    return 0;
}
void cambio(int *p){
    *p =100;
    return;
    
    
}
void imprimir(int *p){
    int i;
    for(i=0;i<5;i++){
        printf("%d \n",*(p+i));
        
        
    }
    
    
    return;
    
    
}
