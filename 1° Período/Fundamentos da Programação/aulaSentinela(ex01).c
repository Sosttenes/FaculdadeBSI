#include<stdio.h>

//Realizar um saque e se o valor do saque for maior ou não for múltiplo de 10 seja inválido

int main(){
    //Declaração de variáveis
    int saldo = 1000, saque;
    //Entrada
    printf("Digite o valor do saque: R$");
    scanf("%d", &saque);
    //Processamento
    while((saque%10!=0)||(saque>saldo)){
       printf("Digite o valor do saque: R$");
       scanf("%d", &saque);
    }
    //Saída
    printf("Saque confirmado, R$%d", saque);
    return 0;
}
