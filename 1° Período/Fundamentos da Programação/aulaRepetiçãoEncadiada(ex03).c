#include <stdio.h>

//Cadastre 5 times, cada um com 4 jogadores, diga quantos s�o menores de 18, m�dia de idade, altura e peso.

int main(){
    //Declara��o de vari�veis
    int times, jogadores, idade, menor18=0, kg80=0;
    float mediaIdade, mediaAltura, totAltura=0, altura, kg;
    //Processamento
    for(times=1; times<=5; times++){
        mediaIdade=0;
        mediaAltura=0;
        for(jogadores=1; jogadores<=4; jogadores++){
            //Entradas
            printf("Idade do jogador %d: ", jogadores);
            scanf("%d", &idade);
            printf("Peso do jogador %d: ", jogadores);
            scanf("%f", &kg);
            printf("Altura do jogador %d: ", jogadores);
            scanf("%f", &altura);
            //Processamento
            if(idade<18){
                menor18++;
            }
            mediaIdade+=idade;
            mediaAltura+=altura;
            if(kg>80){
                kg80++;
            }
        }
        //Sa�da
        printf("A media de idade do time %d eh: %.2f\n", times, mediaIdade/4.0);
        //Processamento
        totAltura+=mediaAltura;
    }
    //Sa�das
    printf("A quantidade de jogadores menores de 18 eh: %d\n", menor18);
    printf("A media das alturas dos jogadores eh: %.2f\n", totAltura/20.0);
    printf("A porcentagem de jogadores com mais de 80kg eh: %.2f\n %", (kg80/20.0)*100);
    return 0;
}
