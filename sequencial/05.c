// 05. Efetuar a leitura de um número inteiro e apresentar o resultado do quadrado deste número.

#include <stdio.h>

int main () {
    int valA;

    printf("digite o valor de A: ");
    scanf("%d", &valA);

    printf("O quadrado de %d e = %d", valA,valA*valA);
}