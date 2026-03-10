#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);

    int tamanho = strlen(str) - 1;

    printf("Quantidade de caracteres: %d\n", tamanho);

    return 0;
}
