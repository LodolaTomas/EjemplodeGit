#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

float funSuma(float numero1,float numero2){
float suma;

suma=numero1+numero2;

return suma;

}
float funRestar(float numero1,float numero2){
float resta;

resta=numero1-numero2;

return resta;
}
float funMultiplicar(float numero1,float numero2){
float multiplicacion;

multiplicacion=numero1*numero2;

return multiplicacion;
}
float funDividir(float numero1,float numero2){
float divicion;

divicion=numero1/numero2;

return divicion;
}
float funFactorial(int numero1 ){

float fac=1;

if(numero1%1==0) {
        for(int i=numero1;i>=1;i--){
        if(i>=1){
            fac=fac*i;
        }
        }
}else{

fac=0;

}

    return fac;
}
int esEntero(float num1){

    int NOdecimal=num1;
    int esEntero=0;

    if (num1-NOdecimal==0)
     {
         esEntero=1;
     }
     return esEntero;
}

float funOPC1(){
    float num1;

                printf("Ingrese numero: A=");
                scanf("%f",&num1);

    return num1;
}
float funOPC2(){
    float num2;

                printf("Ingrese numero: B=");
                scanf("%f",&num2);

    return num2;
}
void funOPC3(float num1,float num2){

            funSuma(num1,num2);
            funRestar(num1,num2);
            funMultiplicar(num1,num2);
            funDividir(num1,num2);
            funFactorial(num1);
            funFactorial(num2);

}
void funOPC4(float num1,float num2){

float suma,restar,multiplicar,dividir;
int factA,factB;

            suma=funSuma(num1,num2);
            restar=funRestar(num1,num2);
            multiplicar=funMultiplicar(num1,num2);
            dividir=funDividir(num1,num2);
            factA=funFactorial(num1);
            factB=funFactorial(num2);
            printf("\n\ta) El resultado de A+B es: %.2f\n",suma);
            printf("\tb) El resultado de A-B es: %.2f\n",restar);
            printf("\tc) El resultado de A*B es: %.2f\n",multiplicar);
            if(num2 == 0){
            printf("\td) No es posible dividir por cero\n");
            }else{
            printf("\td) El resultado de A/B es: %.2f\n",dividir);
            }
            if((num1>=0 && esEntero(num1) ) && (num2>=0 && esEntero(num2))){
                printf("\te) El factorial de A es: %d y El factorial de B es: %d\n",factA,factB);
            }else if(num1>=0 && esEntero(num1)){
                printf("\te) El factorial de A es: %d y No es posible sacar factorial de B\n", factA);
            }else if(num2>=0 && esEntero(num2)){
                printf("\te) No es posible sacar factorial de A y el factorial de B es: %d\n",factB);
            }else{
                printf("\te) No es posible sacar factorial de A y B\n");
            }



}



