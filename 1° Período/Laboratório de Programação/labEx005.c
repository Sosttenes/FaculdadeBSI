#include <stdio.h>

//Calculando valor de um lanche

int main(){
    //Declaração de variáveis
    int cod, quant;
    float valor;
    //Entrada
    printf("Codigo do item: ");
    scanf("%d", &cod);
    printf("Quantidade: ");
    scanf("%d", &quant);
    //Processamento
    switch(cod){
        case 100:
            valor=15.1*quant;
            printf("Valor da compra: R$%.2f", valor);
            break;
        case 101:
            valor=25.3*quant;
            printf("Valor da compra: R$%.2f", valor);
            break;
        case 102:
            valor=30.5*quant;
            printf("Valor da compra: R$%.2f", valor);
            break;
        case 103:
            valor=35.1*quant;
            printf("Valor da compra: R$%.2f", valor);
            break;
        case 104:
            valor=40.3*quant;
            printf("Valor da compra: R$%.2f", valor);
            break;
        case 105:
            valor=10.0*quant;
            printf("Valor da compra: R$%.2f", valor);
            break;
        default:
            printf("Codigo invalido");
    }
    return 0;
}
