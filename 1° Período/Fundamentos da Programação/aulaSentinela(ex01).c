#include<stdio.h>

//Realizar um saque e se o valor do saque for maior ou n�o for m�ltiplo de 10 seja inv�lido

int main(){
    //Declara��o de vari�veis
    int saldo = 1000, saque;
    //Entrada
    printf("Digite o valor do saque: R$");
    scanf("%d", &saque);
    //Processamento
    while((saque%10!=0)||(saque>saldo)){
       printf("Digite o valor do saque: R$");
       scanf("%d", &saque);
    }
    //Sa�da
    printf("Saque confirmado, R$%d", saque);
    return 0;
}
