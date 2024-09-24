//Busca de Caracteres com strchr e strrchr
//a. Solicite ao usuário que insira uma string e um caractere. Use strchr para
//encontrar a primeira ocorrência do caractere na string e exiba a posição
//encontrada (ou uma mensagem indicando que o caractere não foi
//encontrado).
//b. Repita o processo anterior, mas desta vez usando strrchr para encontrar a
//última ocorrência do caractere na string.


#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    char c;
    int i, pos_primeira = -1, pos_ultima = -1;

    // Solicita ao usuário a string
    printf("Digite uma palavra: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';  // Remove o '\n' no final da string

    // Solicita ao usuário o caractere
    printf("Digite um caractere: ");
    scanf(" %c", &c);

    // Encontra a primeira e última ocorrência do caractere
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == c) {
            if (pos_primeira == -1) {
                pos_primeira = i;  // Encontra a primeira ocorrência
            }
            pos_ultima = i;  // Atualiza a última ocorrência
        }
    }

    // Exibe a posição da primeira ocorrência
    if (pos_primeira != -1) {
        printf("Primeira ocorrência do caractere '%c' está no índice %d.\n", c, pos_primeira);
    } else {
        printf("O caractere '%c' não foi encontrado na palavra.\n", c);
    }

    // Exibe a posição da última ocorrência
    if (pos_ultima != -1) {
        printf("Última ocorrência do caractere '%c' está no índice %d.\n", c, pos_ultima);
    } else {
        printf("O caractere '%c' não foi encontrado na string.\n", c);
    }

    return 0;
}
