#include <stdio.h>
#include <math.h>

//

int main() {
    //Declara��o de vari�veis
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
    //Sa�da
    printf("A soma eh %f", soma);
    return 0;
}
