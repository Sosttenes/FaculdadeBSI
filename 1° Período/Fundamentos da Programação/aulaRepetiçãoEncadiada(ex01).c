#include <stdio.h>

//Calcule o fatorial de um numero

int main(){
    //Declara��o de vari�veis
    int num;
    long int facNum=1;
    //Entrada
    printf("Digite um numero pra calcular seu fatorial: ");
    scanf("%d", &num);
    //Processamento
    for (; num>=1; num--){
        facNum*=num;
    }
    //Sa�da
    printf("%d", facNum);
    return 0;
}
