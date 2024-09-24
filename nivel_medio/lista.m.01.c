//Manipulação Básica de Strings com strlen e strcpy
//a. Solicite ao usuário que insira uma string. Em seguida, use a função strlen
//para calcular e imprimir o comprimento da string fornecida.
//b. Peça ao usuário uma segunda string. Use strcpy para copiar a primeira string
//para uma nova variável e exiba ambas as strings no console para
//comparação.


#include <stdio.h>
#include <string.h>  // Biblioteca para strlen e strcpy

int main() {
    char frase1[100];
    char frase2[100];
    char copia[100]; // Variável para armazenar a cópia da primeira string

    // a. Solicitar ao usuário que insira a primeira string
    printf("Digite a primeira frase: ");
    fgets(frase1, sizeof(frase1), stdin);
    
    // Remover a nova linha '\n' adicionada pelo fgets
    frase1[strcspn(frase1, "\n")] = '\0';

    // Usar strlen para calcular o comprimento da string
    int comprimento = strlen(frase1);
    printf("O comprimento da primeira string é: %d\n", comprimento);

    // b. Solicitar a segunda string ao usuário
    printf("Digite a segunda frase: ");
    fgets(frase2, sizeof(frase2), stdin);
    
    // Remover a nova linha '\n' adicionada pelo fgets
    frase2[strcspn(frase2, "\n")] = '\0';

    // Usar strcpy para copiar a primeira string para a variável 'copia'
    strcpy(copia, frase1);

    // Exibir as strings para comparação
    printf("Primeira string: %s\n", frase1);
    printf("Segunda string: %s\n", frase2);
    printf("Cópia da primeira string: %s\n", copia);

    return 0;
}