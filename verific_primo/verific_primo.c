#include <stdio.h>

int main() {
    int n;
    int totaldivisores = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            totaldivisores++;
        }
    }

    if (totaldivisores == 2 && n > 1) {
        printf("O número %d é primo\n", n);
    } else {
        printf("O número %d não é primo\n", n);
    }

    return 0;
}
