#include <stdio.h>

int main() {
    int n, i;
    int soma = 0;
    float media;

    printf("Quantos números você deseja somar? ");
    scanf("%d", &n);

    int numeros[n]; 

    for (i = 0; i < n; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &numeros[i]);
        soma += numeros[i];
    }

    media = (float)soma / n;

    printf("A soma dos números é: %d\n", soma);
    printf("A média dos números é: %.2f\n", media);

    return 0;
}
