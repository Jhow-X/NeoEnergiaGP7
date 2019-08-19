/*1. Leia três números e retorne o maior deles.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int A,B,C,D,E;
    printf("\nDigite o primeiro numero:");
    scanf("%d",&A);

    printf("\nDigite o segundo numero:");
    scanf("%d",&B);

    printf("\nDigite o segundo numero:");
    scanf("%d",&C);

    if (A > B){
        D = A;
    }
    else {
        D = B;
    }

    if (D > C){
        E = D;
    }
    else {
        E = C;
    }
    printf("\nO maior numero e %d",E);
   return 0;
}


