#include <stdio.h>

int main() {
    int base;
    int altura;

    //Algoritmo para calcular a área de um triângulo
    //diferença entre scanf e fgets: scanf lê apenas até o primeiro espaço em branco, enquanto fgets lê a linha inteira, incluindo espaços em branco.
    printf("Digite o valor da base: ");
    scanf("%d", &base);
    printf("\nDigite o valor da altura: ");
    scanf("%d", &altura);

    printf("A área do triângulo é: %d\n", (base * altura) / 2);

    return 0;
}