//Manipulação de Substrings com strstr e Tokenização com strtok
//a. Solicite ao usuário que insira uma string e uma substring. Use strstr para
//procurar pela primeira ocorrência da substring na string principal e informe a
//posição ou indique que não foi encontrada.
//b. Peça ao usuário que insira uma string e um conjunto de caracteres
//delimitadores (por exemplo, vírgula, espaço, etc.). Use strtok para dividir a
//string em substrings com base nos delimitadores fornecidos e exiba cada
//token encontrado.

#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    char substr[100];
    char delimitadores[10];
    char str_copiada[200];
    int i, j, encontrado;
    int inicio_token, fim_token;

    // Parte a: Manipulação de Substrings com strstr
    printf("Digite a string principal: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';  // Remove o '\n' no final da string

    printf("Digite a substring a ser procurada: ");
    fgets(substr, sizeof(substr), stdin);
    substr[strcspn(substr, "\n")] = '\0';  // Remove o '\n' no final da substring

    // Busca da substring sem usar ponteiros
    int str_len = strlen(str);
    int substr_len = strlen(substr);
    encontrado = 0;

    for (i = 0; i <= str_len - substr_len; i++) {
        for (j = 0; j < substr_len; j++) {
            if (str[i + j] != substr[j]) {
                break;
            }
        }
        if (j == substr_len) {
            printf("A substring '%s' foi encontrada na posição %d.\n", substr, i);
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("A substring '%s' não foi encontrada na string principal.\n", substr);
    }

    // Parte b: Tokenização com strtok
    printf("Digite uma string para tokenização: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';  // Remove o '\n' no final da string

    printf("Digite os delimitadores (sem espaços): ");
    fgets(delimitadores, sizeof(delimitadores), stdin);
    delimitadores[strcspn(delimitadores, "\n")] = '\0';  // Remove o '\n' no final dos delimitadores

    // Copia a string original para evitar modificar a original durante a tokenização
    strcpy(str_copiada, str);

    // Tokenização sem usar ponteiros
    int delimit_len = strlen(delimitadores);
    int start = 0;
    for (i = 0; i <= strlen(str_copiada); i++) {
        int is_delimiter = 0;

        // Verifica se o caractere atual é um delimitador
        for (j = 0; j < delimit_len; j++) {
            if (str_copiada[i] == delimitadores[j]) {
                is_delimiter = 1;
                break;
            }
        }

        // Se encontrou um delimitador ou chegou ao final da string
        if (is_delimiter || str_copiada[i] == '\0') {
            if (i > start) {
                // Imprime o token
                for (j = start; j < i; j++) {
                    putchar(str_copiada[j]);
                }
                putchar('\n');
            }
            // Atualiza o início do próximo token
            start = i + 1;
        }
    }

    return 0;
}
