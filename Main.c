#include <stdio.h>
#include <stdbool.h>
int main()
{
    int idade;
    float altura;
    bool entrada;
    char anos[50] = "anos";

    printf("\nDigite sua idade: ");
    scanf("%i",&idade);
    printf("A idade informada é: %i %s",idade , anos);

    printf("\nDigite sua altura: ");
    scanf(" %f",&altura);
    printf("A altura informada é: %.2f",altura);

    if(idade >= 12 && altura >= 1.40){
        entrada = true;
        printf("\nPermissão de entrada: Permitida (%d)\n", entrada);
    }
    else {
        entrada = false;
        printf("\nPermissão de entrada: Negada (%d)\n", entrada);
    }

    return 0;
}