#include <stdio.h>

//M�dia final e conceito do aluno

int main(){
    //Declara��o de vari�veis
    float tl, as, ef, nf;
    //Entrada
    printf("Nota do trabalho de laboratorio: ");
    scanf("%f", &tl);
    printf("Nota da avalia��o semestral: ");
    scanf("%f", &as);
    printf("Nota do exame final: ");
    scanf("%f", &ef);
    //Processamento
    nf=((tl*2)+(as*3)+(ef*5))/10;
    //Sa�das
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
