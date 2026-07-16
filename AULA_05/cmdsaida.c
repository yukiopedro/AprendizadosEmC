#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    char nomePersonagem[] = "Mario";
    char cidade[] = "Mushroom Kingdom";

    printf("O personagem %s vive na cidade %s.\n", nomePersonagem, cidade);

    return 0;
}