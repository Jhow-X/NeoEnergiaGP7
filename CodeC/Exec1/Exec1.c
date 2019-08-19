/*
Escreva um programa que determina se o aluno foi ou
não aprovado na disciplina. Não esqueça de considerar
a situação de segunda chamada e final. Considere que
uma nota negativa indica que o aluno faltou a avaliação.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    float A, B, C, Final, Media, Resultado;

        printf("\nDigite a primeira nota:\t");
        scanf("%f", &A);

        if (A < 0) {
            printf("\nDigite a segunda chamada da primeira nota:\t");
            scanf("%f", &A);
        }

        printf("\nDigite a segunda nota:\t");
        scanf("%f", &B);

         if (B < 0) {
            printf("\nDigite a segunda chamada da segunda nota:\t");
            scanf("%f", &B);
        }

        printf("\nDigite a terceira nota:\t");
        scanf("%f", &C);

         if (C < 0) {
            printf("\nDigite a segunda chamada da terceira nota:\t");
            scanf("%f", &C);
         }
          if (A < 0) {
            A = 0;
        }
         if (B < 0) {
            B = 0;
        }
         if (C < 0) {
            C = 0;
        }

        Media = (A+B+C)/3;

        printf("\n A media foi:\t %f",Media);

        if (Media < 5){
             printf("\nDigite a nota da final:\t");
             scanf("%f", &Final);
        }
        else {
            printf("\nVoce foi aprovado\t");
            return 0;
        }
        if (Final < 0) {
            Final = 0;
        }

        Resultado = (Media+Final)/2;

        if (Resultado < 5){
            printf("\nVoce reprovou!\t");
        }
        else {
            printf("\nVoce foi aprovado na final!\t");
        }


return 0;
}
