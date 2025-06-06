#include <stdio.h>

//Cadastre 5 times, cada um com 4 jogadores, diga quantos são menores de 18, média de idade, altura e peso.

int main(){
    //Declaração de variáveis
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
        //Saída
        printf("A media de idade do time %d eh: %.2f\n", times, mediaIdade/4.0);
        //Processamento
        totAltura+=mediaAltura;
    }
    //Saídas
    printf("A quantidade de jogadores menores de 18 eh: %d\n", menor18);
    printf("A media das alturas dos jogadores eh: %.2f\n", totAltura/20.0);
    printf("A porcentagem de jogadores com mais de 80kg eh: %.2f\n %", (kg80/20.0)*100);
    return 0;
}
