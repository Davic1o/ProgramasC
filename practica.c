#include <stdio.h>
#include <stdlib.h>
#include<string.h>
typedef struct{
    int identificador;
    char nombreProducto[10];
    char unidad[3];
    float cantidad;
    float costo;
    int giva;
}Item;

typedef struct{
    int identificador;
    char nombreProducto[20];
    char unidad[3];
    float cantidadDisponible;
    int grabaIVA;
    float precioUnitario;
}Producto;

typedef struct {
    int cedula;
    char nombre[50];
}Cliente;


typedef struct {
    Cliente cliente;
    int numero;
    float total0;
    float total12;
    float iva;
    float total;
    int nItems;
    Item items[10];
}Factura;


Producto obtenerProducto(int identificador, char nombre[], char unidad[], float disponible, int grabaIVA, float precioUnitario);
Cliente obtenerCliente();
Factura obtenerFactura( Producto productos[], int nFactura);

void mostrarInventario(Producto productos[]);
void actualizar (int id,Producto p[],int cant);
void listarFacturas(int nFacturas, Factura facturas[]);

void info (int id,Producto p[]);

int main()
{
    int i, opcion, nFacturas=0;
    Producto productos[10];
    Factura facturas[10];

    //Llenar base de datos de productos
    productos[0] = obtenerProducto(100, "arroz", "kg", 100, 0, 1);
    productos[1] = obtenerProducto(200, "leche", "lt", 50, 0, 0.7);
    productos[2] = obtenerProducto(300, "huevos", "u", 100, 0, 0.1);
    productos[3] = obtenerProducto(400, "pescado", "kg", 60, 0, 6);
    productos[4] = obtenerProducto(500, "pasta", "u", 100, 1, 3);
 

    do{
        printf("\nMENU DE OPCIONES");
        printf("\n1. Mostrar inventario");
        printf("\n2. Ingresar Factura");
        printf("\n3. Listar Facturas");
        printf("\n4. Salir\n");
        printf("\n\nSeleccione una opcion: ");
        scanf("%d",&opcion);

        switch(opcion){
            case 1:
                mostrarInventario(productos);
                break;
            case 2:

                facturas[nFacturas]=obtenerFactura( productos,nFacturas);
                nFacturas=nFacturas+1;
                break;
            case 3:
                 printf ("\n-------------------------------------FACTURAS-----------------------------------\n");
    printf ("No.\t");
    printf ("Cliente\t");
    printf ("Items\t\t\t");
    printf ("Total0\t");
    printf ("Total12\t");
    printf ("IVA\t");
    printf ("Total\t");

listarFacturas(nFacturas,facturas);


                break;
        }
    }while(opcion!=4);
    return 0;
    
}





 Cliente obtenerCliente(){
 Cliente m;
 printf("...Ingresando factura");
 printf("\nCedula del cliente: ");
 scanf("%d", &m.cedula);
 fflush(stdin);
 printf("Nombre del cliente: ");
 gets(m.nombre);
 fflush(stdin);
 return m;
 }



Factura obtenerFactura( Producto productos[], int nFactura){
 Cliente c;
 Factura f;
 int i,j;
 int n;
 float tota1=0 ,total2=0,iva=0,total=0;
 c=obtenerCliente();
 f.cliente=c;
printf("Cuantos items compra: ");
 scanf("%d", &f.nItems);

 for(i=0;i<f.nItems;i++){
printf("Identificador del item %d: ", i+1);
    scanf("%d", &f.items[i].identificador);

    info(f.items[i].identificador,productos);
    scanf("%d", &n);
   
int j;
    for (j = 0; j < 5; j++)
    {
        if (productos[j].identificador==f.items[i].identificador){
        strcpy(f.items[i].nombreProducto,productos[j].nombreProducto);
        f.items[i].cantidad=n;
        f.items[i].costo=productos[j].precioUnitario;
         f.items[i].giva=productos[j].grabaIVA;    
        }
    }
     actualizar(f.items[i].identificador,productos,n);
 }
 int j;
for (j = 0; j < f.nItems; j++)
{
    if(f.items[j].giva==0){
        tota1=tota1+(f.items[j].costo*f.items[j].cantidad);
    }
    if(f.items[j].giva==1){
        total2=total2+(f.items[j].costo*f.items[j].cantidad);
    }
    
}

f.total0=tota1;
f.total12=total2;
f.total=f.total0+(f.total12*0.12)+f.total12;
f.iva=(f.total12*0.12);


return f;
 }





Producto obtenerProducto(int identificador, char nombre[], char unidad[], float disponible, int grabaIVA, float precioUnitario){
Producto p;
p.identificador=identificador;
strcpy(p.nombreProducto,nombre);
strcpy(p.unidad, unidad);
p.cantidadDisponible= disponible;
p.grabaIVA=grabaIVA;
p.precioUnitario=precioUnitario;
return p;
}
void mostrarInventario(Producto x[]){
    int i;
    printf ("\n------------------------------------INVENTARIO----------------------------------\n");
    printf ("ID.\t");
    printf ("Producto\t");
    printf ("Unidad\t");
    printf ("Disponible\t");
    printf ("grabaIVA\t");
    printf ("Precio Unitario\n");

    for(i=0;i<5;i++){
        printf("%d\t", x[i].identificador);
        printf("%s\t\t", x[i].nombreProducto);
        printf("%s\t", x[i].unidad);
        printf("%0.1f\t\t", x[i].cantidadDisponible);
        printf("%d\t\t", x[i].grabaIVA);
        printf("%0.1f\n", x[i].precioUnitario);

    }

}
void listarFacturas(int nFacturas, Factura facturas[]){

    for(int i=0;i<nFacturas;i++)
    {
        printf("\n%d\t",i);
        printf("%s\t",facturas[i].cliente.nombre);
        for (int j  = 0; j <facturas[i].nItems ; j++)
        {
             printf("%s-",facturas[i].items[j].nombreProducto);
        }
        
      
        printf("\t\t%0.1f\t",facturas[i].total0);
        printf("%0.1f\t",facturas[i].total12);
        printf("%0.1f\t",facturas[i].iva);
        printf("%0.1f\t",facturas[i].total);
    }
    
}

void actualizar (int id,Producto p[],int cant){

for (int  i = 0; i < 5; i++)
{
    if (p[i].identificador==id){
        p[i].cantidadDisponible=p[i].cantidadDisponible-cant;
    }
}

}

void info (int id,Producto p[]){

for (int  i = 0; i < 5; i++)
{
    if (p[i].identificador==id){
printf("\tIngrese cantidad (%s) de %s (USD %0.1f por %s): ", 
p[i].unidad, 
p[i].nombreProducto,
 p[i].precioUnitario,
  p[i].unidad);
    }
}

}
