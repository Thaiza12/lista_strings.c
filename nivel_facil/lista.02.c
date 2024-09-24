//Implemente uma função chamada minha_strcpy que recebe dois vetores de
//caracteres: origem e destino. A função deve copiar o conteúdo de origem para
//destino. Suponha que destino é grande o suficiente para receber a cópia de origem.

#include <stdio.h>

// Função para copiar o conteúdo de origem para destino sem ponteiros
void minha_strcpy(char destino[], char origem[]) {
    int i = 0;
    
    // Copia os caracteres um a um
    while (origem[i] != '\0') {  // Enquanto não for o final da string
        destino[i] = origem[i];  // Copia o caractere da origem para o destino
        i++;                     // Avança para o próximo caractere
    }

    destino[i] = '\0';  // Adiciona o terminador de string no destino
}

int main() {
    char frase1[100];  // Vetor de origem
    char frase2[100];  // Vetor de destino

    printf("Escreva uma frase: \n");
    gets(frase1);  

    printf("Escreva outra frase: \n");
    gets(frase2);

    // Copia o conteúdo de frase1 para frase2
   minha_strcpy(frase2, frase1);

    // Exibe as strings
    printf("Frase original: %s\n", frase1);
    printf("Frase copiada: %s\n", frase2);

    return 0;
}