//Escreva uma função chamada minha_strncat que recebe dois vetores de caracteres:
//primeira e segunda, e um número n. A função deve concatenar até n caracteres da
//segunda string ao final da primeira. Suponha que primeira tem espaço suficiente
//para armazenar o resultado.

#include <stdio.h>
#include <string.h>

void minha_strncat(char primeira[], const char segunda[], int n) {
    int i = 0, j = 0;

    // Encontrar o fim da primeira string
    while (primeira[i] != '\0') {
        i++;
    }

    // Concatenar até n caracteres da segunda string
    while (j < n && segunda[j] != '\0') {
        primeira[i] = segunda[j];
        i++;
        j++;
    }

    // Adicionar o caractere nulo no final
    primeira[i] = '\0';
}

int main() {
    char primeira[100];
    char segunda[100];
    int n;

    // Solicita ao usuário as duas strings
    printf("Digite a primeira frase: ");
    fgets(primeira, sizeof(primeira), stdin);
    primeira[strcspn(primeira, "\n")] = '\0';  // Remove o '\n' lido pelo fgets

    printf("Digite a segunda frase: ");
    fgets(segunda, sizeof(segunda), stdin);
    segunda[strcspn(segunda, "\n")] = '\0';  // Remove o '\n' lido pelo fgets

    // Solicita o número de caracteres a concatenar
    printf("Digite o número de caracteres da segunda frase a concatenar: ");
    scanf("%d", &n);

    // Realiza a concatenação
    minha_strncat(primeira, segunda, n);

    // Exibe o resultado
    printf("Resultado da concatenação:  %s\n", primeira);

    return 0;
}
