#include <stdio.h>
#include <stdbool.h>

int main()
{
    char aluno[50];
    float nota;

    printf("Olá, digite por favor seu nome: ");
    scanf("%s", aluno);


//coloquei o do e o while pra ficar um pouco melhor
    do { 
    printf("Digite sua nota final: ");
    scanf("%f", &nota);

    if (nota < 0.0 || nota > 10.0){ //verifica se a nota é menor OU maior que 10 e exibe o erro.
        printf("nota inválida! por favor, insira um valor entre 0 e 10.\n");
        }
    } while (nota < 0.0 || nota > 10.0); //verifica se a condição do "do" é verdadeira e se for ele repete o codigo acima.


    if (nota >= 7.0){
        printf("Parabens %s, você está Aprovado!\n", aluno);
    } else if (nota >= 5.0){
        printf("Infelizmente %s, você está de Recuperação!\n", aluno);
    } else {
        printf("Infelizmente %s, você está Reprovado!\n", aluno);
    }

}