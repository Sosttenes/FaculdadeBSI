#include <stdio.h>
#include <math.h>

//Calcule a soma da sequência S=1+(x^2/3!)-(x^3/4!)+...

int main() {
    //Declaração de variáveis
    int x, numtermos, denominador=6, i;
    float termo, soma=1;
    //Entrada
    printf("Digite o X: ");
    scanf("%d", &x);
    printf("Digite o numero de termos: ");
    scanf("%d", &numtermos);
    //Processamento
    for(i=2; i<=numtermos; i++){
        termo=pow(x,i)/denominador;
        if(i%2==0){
            soma+=termo;
        }
        else{
            soma-=termo;
        }

        denominador*=(i+1);
    }
    //Saída
    printf("A soma eh %f", soma);
    return 0;
}
