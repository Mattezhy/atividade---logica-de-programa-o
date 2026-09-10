#include <stdbool.h>
#include <stdio.h>
int main()
{
    float produto;
    int quantidade;
    float total;
    float valor_pago;
    float troco;

    printf("Digite o valor do produto: ");
    scanf("%f", &produto);

    printf("Digite a quantidade: ");
    scanf("%i", &quantidade);

    total = produto * quantidade;
    printf("Total a pagar: %.2f", total);

    printf("\nDigite o valor pago: ");
    scanf("%f", &valor_pago);
    if (valor_pago < total){
        printf("Valor insuficiente! faltam R$ %.2f\n", total - valor_pago);
    } else {
    troco = valor_pago - total;
    printf("Total de troco: R$ %.2f", troco);
    }

}