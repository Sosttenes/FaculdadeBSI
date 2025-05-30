#include <stdio.h>

//Usando o for calcule a média de 5 notas

int main(){
    //Declaração de variáveis
    int cont;
    float media, soma, nota=0;
    for(cont=0; cont<=4; cont++){
        scanf("%f", &nota);
        soma += nota;
    }
    //Processamento
    media = soma/cont;
    //Saída
    printf("A média é %f", media);
    return 0;
}
