#include <stdio.h>

//Calcule a soma da sequ�ncia s=1+1/1!+1/2!...

int main(){
    //Declara��o de vari�veis
    int n, i, denominador=1;
    float e, termo;
    //Entrada
    printf("Numero de termos: ");
    scanf("%d", &n);
    //Processamento
    for(i=1; i<=n; i++){
        termo=1.0/denominador;
        e+=termo;
        denominador*=i;
    }
    //Sa�da
    printf("O valor de e eh: %f", e);
    return 0;
}
