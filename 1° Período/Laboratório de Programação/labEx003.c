#include <stdio.h>

//Verifique se um n�mero � divis�vel por 4 e 5

int main(){
    //Declara��o de vari�vel
    int num;
    //Entrada
    printf("Digite um numero");
    scanf("%d");
    //Processamento
    if((num%4!=0)&&(num%5!=0)){
        printf("N�o � divisivel por 4 e por 5");
    }else{
        printf("%d e divisivel por 4 e por 5");
    }
    return 0;
}
