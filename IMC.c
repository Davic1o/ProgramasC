#include <stdio.h>
int main(){
    int estatura;
    float peso,IMC,PESOF;
    printf("Evaluacion del estado de su eso en base al IMC\n---------------------------------------------\n");
    printf("Ingrese su estatura en cm: ");
    scanf("%d",&estatura);
    printf("ingrese su peso Kg: ");
    scanf("%f",&peso);
    IMC=(peso)/((estatura*0.01)*(estatura*0.01));
    printf("Su IMC es: %.2f\n",IMC);
        if ((IMC<=25) && (IMC>=18.5)){
            printf("Su estado es: Peso normal");
    }else{
         if (IMC<18.5){
             PESOF=((21*(estatura*0.01))*(estatura*0.01))-peso;
            printf("Su estado es: Bajo peso. Debe aumentar %0.2f Kg para alcanzar su estado saludable!",PESOF); 
         }else{
             if ((IMC<=30) && (IMC>=25)){
             PESOF=-((21*(estatura*0.01))*(estatura*0.01))+peso;
             printf("Su estado es: Sobrepeso. Debe disminuir %0.2f Kg para alcanzar su estado saludable!",PESOF);
             }else{
                 if(IMC>=30){
                     PESOF=-((21*(estatura*0.01))*(estatura*0.01))+peso;
                     printf("Su estado es: Obesidad. Debe disminuir %0.2f Kg para alcanzar su estado saludable!",PESOF);
                 }
         }
    }
    }
    return 0;
}
