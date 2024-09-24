//Desenvolva uma função minha_strstr que recebe dois vetores de caracteres: texto e
//subtexto. A função deve retornar o índice da primeira ocorrência de subtexto em
//texto ou -1 se subtexto não for encontrado.


#include <stdio.h>
#include <string.h>

int minha_strstr(char texto[], char subtexto[]) {
    int i, j;

    for (i = 0; texto[i] != '\0'; i++) {
        for (j = 0; subtexto[j] != '\0'; j++) {
            if (texto[i + j] != subtexto[j]) {
                break;
            }
        }
        if (subtexto[j] == '\0') {
            return i;  // Retorna o índice onde o subtexto foi encontrado
        }
    }

    return -1;  // Se não encontrou o subtexto, retorna -1
}

int main() {
    char texto[200], subtexto[100];

    // Solicita o texto e o subtexto do usuário
    printf("Digite o texto: ");
    fgets(texto, sizeof(texto), stdin);  // Usa fgets para ler o texto com espaços

    printf("Digite o subtexto: ");
    fgets(subtexto, sizeof(subtexto), stdin);  // Usa fgets para ler o subtexto

    // Remove o '\n' do final da string, se houver
    texto[strcspn(texto, "\n")] = '\0';
    subtexto[strcspn(subtexto, "\n")] = '\0';

    // Procura o subtexto no texto
    int indice = minha_strstr(texto, subtexto);

    if (indice != -1) {
        printf("O subtexto '%s' foi encontrado no índice %d.\n", subtexto, indice);
    } else {
        printf("O subtexto '%s' não foi encontrado.\n", subtexto);
    }

    return 0;
}

