#include <stdio.h>

//Estrutura de repeti��o controlada por CONDI��O

int main(){
    // Declara��o de vari�veis
    int numero, soma = 0;
    // soma vai ser um acumulador de soma, por isso come�a com 0
    // Entrada
    printf("Informe um numero: ");
    scanf("%d ", &numero);
    // Processamento
    while (numero!=0){
        // Soma vai receber o valor de n�mero em todas as vezes no loop
        soma+=numero;
        printf("Informe um numero: ");
        // Sentinela
        scanf("%d", &numero);
    }
    printf("A soma eh: %d", soma);
    return 0;
}
