// 03.Um professor atribui pesos de 1 a 4 para as notas de quatro avaliações. A nota é calculada por meio da média ponderada (N1*1 + N2*2 + N3*3 + N4*4)/(1+2+3+4), onde N1 é a nota da primeira avaliação, N2 a da segunda, etc. Um aluno tirou as seguintes notas: 8 - 7,5 - 10 - 9. Faça um programa que calcula e escreva a média deste aluno.

#include <stdio.h>

int main () {
    float n1,n2,n3,n4, media;

    printf("Digite a nota 1 do aluno: ");
    scanf("%f", &n1);
    printf("Digite a nota 2 do aluno: ");
    scanf("%f", &n2);
    printf("Digite a nota 3 do aluno: ");
    scanf("%f", &n3);
    printf("Digite a nota 4 do aluno: ");
    scanf("%f", &n4);

    media = (n1*1+n2*2+n3*3+n4*4)/ (1+2+3+4);

    printf("a media do aluno foi de:  %5.2f", media);
}

