#include <stdio.h>
#include <stdlib.h>

///Procedimiento Temperatura
void *temperatura(float *temperatura_normal){
*temperatura_normal=(*temperatura_normal-32)/1.8;
}

int main()
{
    int opciones,j,i,respuesta,mes,dia;
    float temperaturaje;
    float promedio_x_mes[12]={0,0,0,0,0,0,0,0,0,0,0,0};
    float promedio_x_trimestre[4]={0,0,0,0};
    int matriz_temperatura[12][30];


    do{
        ///Menú
    printf("¡Buenos dias!\n");
    printf("Ingrese 0 para inicializar la matriz\n");
    printf("Ingrese 1 para ingresar valores positivos de temperatura\n");
    printf("Ingrese 2 para ingresar valores negativos de temperatura\n");
    printf("Ingrese 3 para ver el promedio de temperaturas por mes\n");
    printf("Ingrese 4 para ver el promedio de temperaturas por trimestre\n");
    printf("Ingrese 5 para finalizar el programa:");
    scanf("%d",&opciones);
    ///Opción incorrecta
    while(opciones<0 || opciones>5){
    printf("Error: La opcion ingresada no es valida\n");
    printf("Ingrese 0 para inicializar la matriz\n");
    printf("Ingrese 1 para ingresar valores positivos de temperatura\n");
    printf("Ingrese 2 para ingresar valores negativos de temperatura\n");
    printf("Ingrese 3 para ver el promedio de temperaturas por mes\n");
    printf("Ingrese 4 para ver el promedio de temperaturas por trimestre\n");
    printf("Ingrese 5 para finalizar el programa:");
    scanf("%d",&opciones);
    }
    switch(opciones){
   case 0:
       for (i=0;i<=11;i++){
        for (j=0;j<=29;j++){
        matriz_temperatura[i][j]=0;
        }
    }

    printf("¡La matriz se inicializo con exito!\n");
    printf("Ingrese 1 para seguir:\n");
    scanf("%d",&respuesta);
    system("CLS");
    break;


   case 1:
       printf("Ingrese la temperatura que desea calcular:\n");
       scanf("%f",&temperaturaje);
       temperatura(&temperaturaje);
       printf("¿En que mes desea registrar la temperatura (del 0 al 11)?\n");
       scanf("%d",&mes);
       printf("¿En que dia desea registrar la temperatura (del 0 al 29)?\n");
       scanf("%d",&dia);
       matriz_temperatura[mes][dia]=temperaturaje;
       if (temperaturaje<=30){
        printf("===Alerta Verde===\n");
       }
       if (temperaturaje>=40){
       printf("===Alerta Roja===\n");
       }
       if (temperaturaje<40 &&temperaturaje>30){
       printf("===Alerta Amarilla===\n");
       }
       printf("¿Desea continuar?\n");
       printf("1.Si\n");
       printf("5.No\n");
       scanf("%d",&respuesta);
    break;

   case 2:
       printf("Ingrese la temperatura que desea calcular:\n");
       scanf("%f",&temperaturaje);
       temperatura(&temperaturaje);
       printf("¿En que mes desea registrar la temperatura (del 0 al 11)?\n");
       scanf("%d",&mes);
       printf("¿En que dia desea registrar la temperatura (del 0 al 29)?\n");
       scanf("%d",&dia);
       matriz_temperatura[mes][dia]=temperaturaje;
       if (temperaturaje>=0){
        printf("===Alerta Verde===\n");
       }
       if (temperaturaje<-10){
       printf("===Alerta Roja===\n");
       }
       if (temperaturaje<0 &&temperaturaje>=-10){
       printf("===Alerta Amarilla===\n");
       }
       printf("¿Desea continuar?\n");
       printf("1.Si\n");
       printf("5.No\n");
       scanf("%d",&respuesta);
    break;

   case 3:

       for (i=0;i<=11;i++){
            for (j=0;j<=29;j++){
                promedio_x_mes[i]=(promedio_x_mes[i]+ matriz_temperatura[i][j]);
            }

       }
       for (i=0;i<=11;i++){
        printf("\n===Promedio del mes N°%d===",i);
        printf("\n%f",promedio_x_mes[i]/30);
       }
       printf("\n¿Desea continuar?\n");
       printf("1.Si\n");
       printf("5.No\n");
       scanf("%d",&respuesta);
    break;

   case 4:
       promedio_x_trimestre[0]=(promedio_x_mes[0]+promedio_x_mes[1]+promedio_x_mes[2]);
       promedio_x_trimestre[1]=(promedio_x_mes[3]+promedio_x_mes[4]+promedio_x_mes[5]);
       promedio_x_trimestre[2]=(promedio_x_mes[6]+promedio_x_mes[7]+promedio_x_mes[8]);
       promedio_x_trimestre[3]=(promedio_x_mes[9]+promedio_x_mes[10]+promedio_x_mes[11]);
       for (i=0;i<=3;i++){
        printf("\n===Promedio del trimestre N°%d===",i);
        printf("\n%f",promedio_x_trimestre[i]/3);
       }



       printf("\n¿Desea continuar?\n");
       printf("1.Si\n");
       printf("5.No\n");
       scanf("%d",&respuesta);
    break;

   case 5:
    printf("\nUsted finalizo el programa");


}///Cierre opciones




}while(respuesta<5);


    return 0;
}
