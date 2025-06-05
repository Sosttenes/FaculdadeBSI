#include <stdio.h>

//Calcule o fatorial de um numero

int main(){
    //Declaração de variáveis
    int num;
    long int facNum=1;
    //Entrada
    printf("Digite um numero pra calcular seu fatorial: ");
    scanf("%d", &num);
    //Processamento
    for (; num>=1; num--){
        facNum*=num;
    }
    //Saída
    printf("%d", facNum);
    return 0;
}
