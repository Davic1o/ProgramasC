#include<stdio.h>
#include<string.h>
//Complete su código

#define LONG_CODIGO 5
#define LONG_NOMBRE 100
#define LONG_AUTOR 50
#define CANTIDAD_LIBROS 4
typedef struct{
char codigo[LONG_CODIGO];
char nombre[LONG_NOMBRE];
char autor[LONG_AUTOR];
char disponibilidad;
}Libro;
int prestarLibro(Libro lista[],char codigo[]);
int main(){
    
    int indice;
    char codigo[LONG_CODIGO];
    Libro lista[CANTIDAD_LIBROS]={{"L001","Algoritmos y estructuras de datos","Joyanes",'s'},
                              {"L002","Java Programming","Deitel & Deitel",'n'},
                              {"L003","Sistemas Operativos","W. Stallings",'s'},
                              {"L004", "Dispositivos electronicos","Morgan",'n'}};
 //Complete su código
    
    printf("Prestamo de libros\n");
    printf("Ingrese el codigo del libro: ");
    scanf("%s", codigo);
    indice = prestarLibro(lista, codigo);
    if(indice == -1){
        printf("Libro no encontrado!");
    }else if(indice == -2){
        printf("Libro no disponible!");
    }else{
        printf("Libro \"%s\" prestado exitosamente!", lista[indice].nombre);
    }
    return 0;
}

//Complete su código
int prestarLibro(Libro lista[],char codigo[]){
    int i;
for(i=0;i<4;i++){
    if(strcmp(codigo,lista[i].codigo)==0){
        if(lista[i].disponibilidad == 's')
            return i;
            else
                return -2;
    }
}   
return -1;
}
