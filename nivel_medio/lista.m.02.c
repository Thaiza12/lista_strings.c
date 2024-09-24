//Comparação de Strings com strcmp e strncmp
//a. Solicite ao usuário duas strings e utilize strcmp para compará-las. Informe ao
//usuário se as strings são iguais, se a primeira é menor ou maior que a
//segunda.
//b. Peça ao usuário para definir um número n. Use strncmp para comparar as
// até os primeiros n caracteres e exiba o resultado da comparação.

#include <stdio.h>
#include <string.h>

int main() {
    char texto1[100], texto2[100];
    int n;

    // Solicitar ao usuário duas strings
    printf("Digite a primeira palavra: ");
    scanf("%s", texto1);

    printf("Digite a segunda palavra: ");
    scanf("%s", texto2);

    // Comparar as duas strings com strcmp
    if (strcmp(texto1, texto2) == 0) {
        printf("As palavras são iguais.\n");
    } else if (strcmp(texto1, texto2) < 0) {
        printf("A primeira palavra é menor que a segunda.\n");
    } else {
        printf("A primeira palavra é maior que a segunda.\n");
    }

    // Solicitar um número n
    printf("Digite um número  para comparar os primeiros  caracteres: ");
    scanf("%d", &n);

    // Comparar as strings até os primeiros n caracteres com strncmp
    if (strncmp(texto1, texto2, n) == 0) {
        printf("As palavras são iguais nos primeiros %d caracteres.\n", n);
    } else if (strncmp(texto1, texto2, n) < 0) {
        printf("Nos primeiros %d caracteres, a primeira palavra é menor.\n", n);
    } else {
        printf("Nos primeiros %d caracteres, a primeira palavra é maior.\n", n);
    }

    return 0;
}