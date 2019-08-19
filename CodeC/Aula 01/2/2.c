/*2. Converta a temperatura de Fahrenheit para Celsius e vice-versa*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int A, B, C;

    printf("\nDigite 1: C para F,Digite 2: F para C -\t");
    scanf("%d", &A);

    printf("%d", A);

    if (A == 1){
        printf("\nDigite o valor em graus Celsius:");
        scanf("%d",&B);

         C = B * 9 / 5 + 32;

        printf("\nEste valor corresponde a %d",C,"graus Fahrenheit");
    }

    else if (A == 2){
        printf("\nDigite o valor em graus Fahrenheit:");
        scanf("%d",&B);

         C = (B - 32)*5/9;

         printf("\nEste valor corresponde a %d",C,"graus Celsius");

    }

    else{
        printf("\nValor incorreto");
    }
return 0;
}
