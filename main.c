#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void gerarSenha(int numCaracteres)
{
    int i = 0;
    char caracteres[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!#$%'&()*+,-./:;<=>?@[]^_{|}~";
    srand(time(NULL));
    
    printf("\n");
    for (i; i < numCaracteres; i++)
    {
        printf("%c", caracteres[rand() % (sizeof caracteres - 1)]);
    } 
    printf("\n");
}

int main()
{
    int numCaracateres;
    printf("..:Gerador de Senhas:..");
    printf("\nInforme o número de caracteres da senha: ");
    scanf("%d", &numCaracateres);

    if(numCaracateres > 0)
    {
        srand((unsigned int) time(NULL));
        gerarSenha(numCaracateres);
    }
    else
    {
        printf("\nNúmero de caracteres inválido. Por favor, informe um número inteiro positivo.");
    }

    return 0;
}