#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

 int main()
{
    int opcion,flag1=0,flag2=0,flagsuma=0;
    float num1,num2;
    do{
        system("cls");
        printf("\n<<<<<<<<<<<<CALCULADORA>>>>>>>>>>>>\n");
        printf("1) Ingresar numero 1: (A=%.2f)\n", num1);
        printf("2) Ingresar numero 2: (B=%.2f)\n", num2);
        printf("3) Calcular todas las operaciones\n\ta) suma (A + B)\n\tb) resta (A - B)\n\tc) multiplicacion (A * B)\n\td) division (A / B)\n\te) factorial (A! y B!)\n");
        printf("4) Mostrar resultado\n");
        printf("5) SALIR\n");
        printf("Escoja una opcion[0-5]: ");
        scanf("%d", &opcion);
        switch (opcion) {
          case 1:
                num1 = funOPC1();
                flag1=1;
          break;
          case 2:
                num2 = funOPC2();
                flag2=1;
          break;
          case 3:
        if(flag1==1 && flag2==1){
            funOPC3(num1,num2);
            flagsuma=1;
            printf("\n\n\tOperaciones calculadas.\n\n");
            system("pause");
        }else{
            printf("\n\nDEBE INGRESAR AMBOS NUMEROS PARA HACER LOS CALCULOS\n\n");
            system("pause");
        }
          break;
          case 4:
        if(flagsuma==1){
            funOPC4(num1,num2);
            flagsuma=0;
              system("pause");
        }else{
            printf("\n\nDEBE CALCULAR LOS NUMEROS INGRESADOS PARA MOSTRAR LOS RESULTADOS\n\n");
            system("pause");
        }
          break;
          case 5:
          break;
          default:
          printf("\n\n************      ERROR         ************\n\n************REINGRESE UNA OPCION************\n\n");
          system("pause");
          break;
        }
    }while(opcion != 5);
    return 0;
}
