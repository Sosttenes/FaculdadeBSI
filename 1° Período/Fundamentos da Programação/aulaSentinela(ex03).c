#include <stdio.h>

//Usando o for calcule a m�dia de 5 notas

int main(){
    //Declara��o de vari�veis
    int cont;
    float media, soma, nota=0;
    for(cont=0; cont<=4; cont++){
        scanf("%f", &nota);
        soma += nota;
    }
    //Processamento
    media = soma/cont;
    //Sa�da
    printf("A m�dia � %f", media);
    return 0;
}
