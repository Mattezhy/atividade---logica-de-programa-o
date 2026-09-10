#include <stdbool.h>
#include <stdio.h>
int main()
{
    char nome[100] ;
    int idade ;
    float altura ;
    bool CNH = false;

printf("Digite seu nome: ");
scanf("%s",&nome);
printf("nome = %s\n",nome);

printf("Digite sua idade: ");
scanf("%i",&idade);
printf("idade = %i\n",idade);

if(idade >= 18){
    CNH = true;
    printf("Você é um adulto e pode tirar sua CNH!");
}else{
    printf("Você é menor de idade!");
}

printf("\nDigite sua altura: ");
scanf("%f", &altura);
printf("altura = %.2f",altura);

}