#include<stdio.h>
#include<stdlib.h>

int main(){

    float valor1=0,valor2=0, resultado=0;
    int operador=0;
    do{   
        printf("calculadora\n");
        printf("-------------------------------------------------------------------\n");
        printf("digite aqui o valor1: \n");
        scanf("%f",&valor1);
        printf("digite aqui o valor2: \n");
        scanf("%f",&valor2);
        printf("-------------------------------------------------------------------\n");
        printf("\n\t1 - ADICAO\n\t2 - SUBTRACAO\n\t3 - MULTIPLICACAO\n\t4 - DIVISAO\n");
        scanf("%i", &operador);

            switch(operador){
            case 1:
                float adicao(float valor1,float valor2);
                resultado = adicao(valor1, valor2);
                break;
            case 2:
                float subtracao(float valor1,float valor2);
                resultado = subtracao(valor1, valor2);
                break;
            case 3:
                float multiplicacao(float valor1,float valor2);
                resultado = multiplicacao(valor1, valor2);
                break;
            case 4:
                if (valor2 == 0){
                    printf("nao e possivel dividir por 0\n");
                }else{
                    float divisao(float valor1,float valor2);
                    resultado = divisao(valor1, valor2);
                }
                break;
            
            default:
                printf("\n digite uma opcao valida\n");
                break;
            }
            printf("-------------------------------------------------------------------\n");
            printf("\n\t o resultado e:%.5f", resultado);
            printf("\n digite 1 para continuar: ");
            scanf("%i", &operador);
    } while(operador == 1);

        

    return(0);
}
float adicao(float valor1,float valor2){
   return valor1 + valor2;
}
float subtracao(float valor1,float valor2){
   return valor1 - valor2;
}
float multiplicacao(float valor1,float valor2){
   return valor1 * valor2;
}
float divisao(float valor1,float valor2){
   return valor1 / valor2;
}