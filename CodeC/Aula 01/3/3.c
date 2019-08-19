/*3. Determine se um ano é bissexto.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int A,B,C,D;
    printf("\nDigite um ano qualquer:\t");
    scanf("%d",&A);


    B = A % 4 ;
    C = A % 100;
    D = A % 400;


    if(B == 0){
             if (C == 0){
                if (D == 0){
                   printf("\nBissexto!\t");
                   return 0;
                }
            }
            else {
                printf("\nBissexto!\t");
                return 0;
             }

    }
printf("\nNao Bissexto!\t");

return 0;
}
