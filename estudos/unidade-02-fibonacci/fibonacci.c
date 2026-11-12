#include <stdio.h>

int main(void) {
    int n;

    printf("Quantos termos da sequencia de Fibonacci? ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Digite um numero maior que zero.\n");
        return 1;
    }

    long long anterior = 0;
    long long atual = 1;

    for (int i = 0; i < n; i++) {
        printf("%lld ", anterior);

        long long proximo = anterior + atual;
        anterior = atual;
        atual = proximo;
    }

    printf("\n");
    return 0;
}