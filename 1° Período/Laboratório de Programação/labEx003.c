#include <stdio.h>

//Verifique se um número é divisível por 4 e 5

int main(){
    //Declaração de variável
    int num;
    //Entrada
    printf("Digite um numero");
    scanf("%d");
    //Processamento
    if((num%4!=0)&&(num%5!=0)){
        printf("Não é divisivel por 4 e por 5");
    }else{
        printf("%d e divisivel por 4 e por 5");
    }
    return 0;
}
