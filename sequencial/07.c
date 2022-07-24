// 07. Ler dois números inteiros informados pelo usuário, dividi-los, apresentar o resultado da divisão real desses números, o quadrado do primeiro número e o cubo do segundo número.

#include <stdio.h>

int main () {
    float a,b;

    printf("digite num A e B:");
    scanf("%f%f",&a,&b);

    int quadrado = a * a;
    int cubo = b * b * b;
    printf("%.1f / %.1f = %.1f\n", a,b,a/b);
    printf("quadrado do primeiro %d | cubo do segundo %d",quadrado, cubo);
}