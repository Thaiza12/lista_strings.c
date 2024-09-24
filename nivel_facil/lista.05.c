//Escreva uma função chamada minha_strchr que recebe um vetor de caracteres e
//um caractere c. A função deve retornar o índice da primeira ocorrência de c na string
//ou -1 se c não for encontrado.

#include <stdio.h>

int minha_strchr(char str[], char c) {
    int i = 0;

    // Percorre a string até encontrar o caractere nulo '\0'
    while (str[i] != '\0') {
        // Se encontrar o caractere c, retorna o índice
        if (str[i] == c) {
            return i;
        }
        i++;
    }

    // Se não encontrar o caractere, retorna -1
    return -1;
}

int main() {
    char string[100];
    char caractere;

    // Pedindo a string ao usuário
    printf("Digite uma palavra: ");
    scanf("%s", string);  // Lê a string até encontrar um espaço ou nova linha, limitando a 99 caracteres

    // Pedindo o caractere ao usuário
    printf("Digite o caractere a ser procurado: ");
    scanf(" %c", &caractere);  // Lê o caractere (o espaço antes de %c evita problemas com o buffer)

    int indice = minha_strchr(string, caractere);

    if (indice != -1) {
        printf("O caractere '%c' foi encontrado no índice %d.\n", caractere, indice);
    } else {
        printf("O caractere '%c' não foi encontrado.\n", caractere);
    }

    return 0;
}