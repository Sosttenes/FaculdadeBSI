#include <stdio.h>

//Programa que calcula o pre�o com base na entrada e na m�dia de venda mensal

int main(){
    //Declara��o de vari�veis
    float media, valor;
    //Entrada
    printf("Digite a media mensal de vendas do produto: ");
    scanf("%f", &media);
    printf("Digite o valor do produto: R$");
    scanf("%f", &valor);
    //Processamento
    if((media<500)&&(valor<20)){
        valor = valor + (valor*0.1);
    }
    if ((media>=500)&&((valor>=20)&&(valor<70))){
        valor = valor + (valor*0.15);
    }
    if ((media>=1200)&&(valor>=80)){
        valor = valor - (valor*0.17);
    }
    printf("Valor atual � R$%.2f", valor);
    return 0;
}
