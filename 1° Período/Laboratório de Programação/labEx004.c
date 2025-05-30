#include <stdio.h>

//progama que simula uma conta bancária

int main(){
    //Declaração de variável
    char opcao;
    float saldo = 1000, novoSaldo, valorOp;
    int num;
    //Entrada
    printf("Numero da conta: ");
    scanf("%d", &num);
    printf("%f",saldo);
    printf("\nValor: R$");
    scanf("%f", &valorOp);
    printf("\nD - Deposito \nR - Retirada\n");
    scanf(" %c", &opcao); //O espaço no começo do %c é pra evita buffer
    //Processamento
    switch(opcao){
        case 'D':
            novoSaldo = valorOp+saldo;
            break;
        case 'd':
            novoSaldo = valorOp+saldo;
            break;
        case 'R':
            novoSaldo = saldo-valorOp;
            break;
        case 'r':
            novoSaldo = saldo-valorOp;
            break;
        default:
            printf("\nOpcao invalida");
            printf("\nValor: R$");
            scanf("%f", &valorOp);
            printf("\nD - Deposito \nR - Retirada\n");
            scanf(" %c", &opcao);

    }
    if(novoSaldo<0){
        printf("\nSaldo negativo, tchau papae!");
    }
    //Saída
    printf("%.2f", novoSaldo);
    return 0;
}
