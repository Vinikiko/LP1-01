#include <stdio.h>

int main()
{
    int n;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);
    if (n <= 0) 
    {
        printf("Número invalido.\n");
        return 1;
    }
    for (int i = 1; i <= n; i++) 
    {
        printf("%d\n", i);
    }
    return 0;
}
