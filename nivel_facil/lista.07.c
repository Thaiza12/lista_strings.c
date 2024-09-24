//Crie uma função chamada minha_strncpy que recebe dois vetores de caracteres,
//origem e destino, e um número n. A função deve copiar os primeiros n caracteres de
//origem para destino. Suponha que destino tem espaço suficiente para armazenar os
//n caracteres.

#include <stdio.h>

void minha_strncpy(char destino[], const char origem[], int n) {
    int i;

    // Copia os primeiros n caracteres da origem para o destino
    for (i = 0; i < n && origem[i] != '\0'; i++) {
        destino[i] = origem[i];
    }

    // Preenche o restante com '\0' caso origem tenha menos que n caracteres
    for (; i < n; i++) {
        destino[i] = '\0';
    }
}

int main() {
    char origem[100];
    char destino[100];  // Espaço suficiente para a string de destino
    int n;

    // Solicita ao usuário a string de origem
    printf("Digite o texto de origem: ");
    fgets(origem, sizeof(origem), stdin);  // Lê até 99 caracteres da string de origem, incluindo espaços

    // Remove o '\n' do final da string lida por fgets, se houver
    if (origem[strlen(origem) - 1] == '\n') {
        origem[strlen(origem) - 1] = '\0';
    }

    // Solicita ao usuário o valor de n
    printf("Digite o número de caracteres a copiar: ");
    scanf("%d", &n);

    // Realiza a cópia dos primeiros n caracteres
    minha_strncpy(destino, origem, n);

    // Exibe a string de destino após a cópia
    printf("Destino após cópia: %s\n", destino);

    return 0;
}
