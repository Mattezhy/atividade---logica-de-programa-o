#include <stdio.h>

int main()
{
    float num1, num2;
    char operacao;

    printf("Digite um numero: ");
    scanf("%f", &num1);

    printf("Digite a operacao (+, -, *, /): ");
    scanf(" %c", &operacao); //tem que dar um espaço no " %c" pra nao acabar lendo o enter da outra linha e acabar ignorando esta linha.

    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    switch (operacao) {
        case '+':
            printf("Resultado: %.2f\n", num1 + num2);
            break;
        case '-':
            printf("Resultado: %.2f\n", num1 - num2);
            break;
        case '*':
            printf("Resultado: %.2f\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0){
            printf("Resultado: %.2f\n", num1 / num2);
            } else {
                printf("Erro: Divisao por zero nao e permitida\n");
            }
            break;
        default:
            printf("Operacao invalida\n");
            break;
        
    }

    return 0;
}
