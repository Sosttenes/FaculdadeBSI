#include <stdio.h>

//Cadastre 5 times cada um com 4 jogadores, diga quantos s�o menores de 18, m�dia de idade, altura e peso

int main(){
    //Declara��o de vari�veis
        //Variav�is de entrada
        float altura, kg;
        int idade, contador;
        //Variav�is de m�dia
        float somaAltura=0, totAltura=0;
        int menor18, somaIdade, kg80;
    for(contador=1; contador<=5; contador++){
        somaIdade=0;
        for(contador=1; contador<=4; contador++){
            //Entradas
            printf("Idade do jogador %d: ", contador);
            scanf("%d", &idade);
            printf("Peso do jogador %d: ", contador);
            scanf("%f", &kg);
            printf("Altura do jogador %d: ", contador);
            scanf("%f", &altura);
            //Processamento
            if (idade<18){
                menor18++;
            }
            somaIdade+=idade;
            somaAltura+=altura;
            if(kg>80){
                kg80++;
            }
        }
        //Sa�da
        printf("\nA m�dia de idade do time %d eh: %d\n", contador, somaIdade/4);
        //Processamento
        totAltura+=somaAltura;
    }
    //Sa�das
    printf("A quantidade de jogadores menores de 18 anos eh: %d\n", menor18);
    printf("A m�dia das alturas de todos eh: %f\n", totAltura/20);
    printf("O numero de jogadores com mais de 80kg eh: %d\n", (kg80/20.0)*100);
    return 0;
}
