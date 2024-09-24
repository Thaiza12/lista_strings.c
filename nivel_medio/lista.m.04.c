//Concatenação de Strings com strcat e strncat
//a. Solicite ao usuário que insira duas strings. Use strcat para concatenar a
//segunda string ao final da primeira e exiba o resultado.
//b. Peça ao usuário um número n e utilize strncat para concatenar até n
//caracteres da segunda string ao final da primeira. Exiba a string resultante.

#include <stdio.h>
#include <string.h>

int main() {
    char str1[200];
    char str2[100];
    int n;

    // Solicita ao usuário a primeira string
    printf("Digite a primeira string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';  // Remove o '\n' no final da string

    // Solicita ao usuário a segunda string
    printf("Digite a segunda string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';  // Remove o '\n' no final da string

    // Concatenar a segunda string ao final da primeira com strcat
    strcat(str1, str2);
    printf("Resultado da concatenação com strcat: %s\n", str1);

    // Solicita o número n
    printf("Digite o número de caracteres da segunda string a concatenar: ");
    scanf("%d", &n);

    // Limpa o buffer de entrada
    while (getchar() != '\n');

    // Limita o tamanho da segunda string para n caracteres, se necessário
    char str2_limited[100];
    strncpy(str2_limited, str2, n);
    str2_limited[n] = '\0';  // Assegura que a string terminada em nulo

    // Concatenar até n caracteres da segunda string ao final da primeira com strncat
    strncat(str1, str2_limited, n);
    printf("Resultado da concatenação com strncat: %s\n", str1);

    return 0;
}
