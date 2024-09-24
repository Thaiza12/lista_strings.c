//Desenvolva uma função chamada minha_strcmp que recebe dois vetores de
//caracteres e compara as strings lexicograficamente. A função deve retornar 0 se as
//strings forem iguais, um número negativo se a primeira string for menor que a
//segunda, e um número positivo se a primeira for maior.

void minha_strcmp( char vetor1[], char vetor2[]){
    int i = 0;

if (vetor1[i] == '\0' && vetor2[i] == '\0') {
        return 0;  // Retorna 0 se as strings forem iguais
    }
    else if (vetor1[i] == '\0') {
        return -1;  // Retorna negativo se vetor1 for menor (termina antes)
    }
    else {
        return 1;   // Retorna positivo se vetor2 for menor (termina antes)
    }
}

int main (){

    char frase1[100];
    char frase2[100];

    printf("Digite uma frase: \n");
    scanf("%s", frase1);

    printf("Digite outra frase: \n");
    scanf("%s", frase2);

    int resultado = minha_strcmp(frase1, frase2);

       if (resultado == 0) {
        printf("As strings são iguais.\n");
    } else if (resultado < 0) {
        printf("A primeira string é menor que a segunda.\n");
    } else {
        printf("A primeira string é maior que a segunda.\n");
    }

    return 0;

}