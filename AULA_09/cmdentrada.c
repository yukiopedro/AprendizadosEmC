#include <stdio.h>

int main() {
    int base;
    int altura;

    //Algoritmo para calcular a área de um triângulo

    printf("Digite o valor da base: ");
    scanf("%d", &base);
    printf("\nDigite o valor da altura: ");
    scanf("%d", &altura);

    printf("A área do triângulo é: %d\n", (base * altura) / 2);

    return 0;
}