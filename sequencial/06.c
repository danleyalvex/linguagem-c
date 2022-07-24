// 06. Efetuar a leitura de um número inteiro e apresentar o resultado do cubo deste número.

#include <stdio.h>

int main () {
    int valA;

    printf("digite valor de A:");
    scanf("%d", &valA);

    int cubo = valA * valA * valA;
    printf("O cubo do num %d e = %d", valA,cubo);
}