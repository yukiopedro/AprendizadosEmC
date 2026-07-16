#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    char nomePersonagem[] = "Mario";
    char cidade[] = "Mushroom Kingdom";

    printf("O personagem %s vive na cidade %s.\n", nomePersonagem, cidade);

    //aprendendo concatenação de strings
    char s1[] = "Olá, ";
    char s2[] = "mundo!";

    strcat(s1, s2); // Concatenando s2 em s1
    printf("%s\n", s1); // Exibindo a string concatenada

    return 0;
}