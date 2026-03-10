#include <stdio.h>

int main()
{
    float celsius;
    float fahrenheit;
    char escala;

    printf("Digite uma escala de temperatura (C para Celsius, F para Fahrenheit): ");
    scanf("%c", &escala);

    if (escala == 'C' || escala == 'c') {
        printf("Digite uma temperatura em Celsius: ");
        scanf("%f", &celsius);
        fahrenheit = (celsius * 9/5) + 32;
        printf("%.2f\n", fahrenheit);
        return 0;
    }
    
    else if (escala == 'F' || escala == 'f')
    {
        printf("Digite uma temperatura em Fahrenheit: ");
        scanf("%f", &fahrenheit);
        celsius = (fahrenheit - 32) * 5/9;
        printf("%.2f\n", celsius);
        return 0;
    }

    else
    {
        printf("Escala de temperatura inválida. Digite C para Celsius ou F para Fahrenheit.\n");
        return 1;
    }
}
