// 04.Escreva um programa que obtêm dois valores inteiros (variáveis A e B) e apresente as operações de adição, subtração, multiplicação e divisão de A por B.

#include <stdio.h>

int main () {
    int a,b;

    printf("Digite o valor de A e B: ");
    scanf("%d%d", &a,&b);

    printf("Adicao de A + B = %d\n", a-b);
    printf("substracao de A - B = %d\n", a-b);
    printf("multiplicacao de A * B = %d\n", a*b);
    printf("divisao de A / B = %d", a/b);
}