//Crie uma função chamada minha_strcat que recebe dois vetores de caracteres:
//primeira e segunda. A função deve concatenar a segunda string ao final da primeira.
//Suponha que o vetor primeira possui espaço suficiente para armazenar o resultado.

#include <stdio.h>

void minha_strcat( char primeira[], char segunda []){
    int i=0;

    while(primeira[i] == '\0' ){  // quando a segunda frase chagar ao fim 
        primeira[i] + segunda[i];  // concaternar a primeira com a segunda
        i++;
    }
}

int main() {
    char frase1[100]; 
    char frase2[100];  

    printf("Escreva uma frase: \n");
    gets(frase1);  

    printf("Escreva outra frase: \n");
    gets(frase2);

minha_strcat(frase1, frase2);

printf("A frase digitada: %s %s \n  ", frase1, frase2);


}