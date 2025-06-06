#include <stdio.h>

//Média final e conceito do aluno

int main(){
    //Declaração de variáveis
    float tl, as, ef, nf;
    //Entrada
    printf("Nota do trabalho de laboratorio: ");
    scanf("%f", &tl);
    printf("Nota da avaliação semestral: ");
    scanf("%f", &as);
    printf("Nota do exame final: ");
    scanf("%f", &ef);
    //Processamento
    nf=((tl*2)+(as*3)+(ef*5))/10;
    //Saídas
    printf("Nota final: %.2f", nf);
    //Processamento
    if(nf>=8&&nf<=10){
        printf("\nConceito: A");
    }
    if(nf>=7&&nf<8){
        printf("\nConceito: B");
    }
    if(nf>=6&&nf<7){
        printf("\nConceito: C");
    }
    if(nf>=5&&nf<6){
        printf("\nConceito: D");
    }
    return 0;
}
