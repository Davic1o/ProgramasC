# include <stdio.h>
int main(){
 int HI,MI,HF,MF,T,HT;
 float P,VP;
printf("Parqueadero dia y noche\n");
printf("Ingrese hora y minutos inicio: ");
scanf("%d %d",&HI, &MI);
printf("Ingrese hora y minutos fin: ");
scanf("%d %d",&HF, &MF);
printf("Ingrese si es de dia(1) o de noche (0): ");
scanf("%d",&T);
printf("Precio por hora en USD: ");
scanf("%f",&P);

 

if(T==0){
HT=2*(HF-HI); 
VP=HT*P;
printf("Valor a pagar: %.2f",VP);
}else{
HT=HF-HI; 
VP=HT*P;    
printf("Valor a pagar: %.2f",VP);
    
}

return(0);
}
