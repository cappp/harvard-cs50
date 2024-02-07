#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// sim, escrevi isso vendo o curso Harvard CS50 kkkkk

int main(void)
{
    // essa variável vai até 100 caracteres (é uma array).
    char resposta[100];

    // sem acento porque não sei usar UTF-8 em C ainda.
    printf("e ai pivetao\n");
    printf("qual e o seu nome? ");

    // lê entrada do usuário até a quebra de linha, com limite de 99 caracteres.
    scanf("%99[^\n]", resposta);

    // %s significa que é uma placeholder, usada para mostrar a resposta da variável.
    printf("%s? nome feio da desgraca\n", resposta);

    // não quero o programa simplesmente feche do nada. só funciona no windows.
    system("pause");

    return 0;
}

// isso é literalmente a primeira coisa que fiz em C.
