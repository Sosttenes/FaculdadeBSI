#include <stdio.h>

//Digite um n�mero e o programa deve fazer uma lista com todos os n�meros de 1 at� o listado, mostrando os fatoriais de cada um.

int main(){
    //Declara��o de vari�veis
    int n, i, fatorial=1;
    //Entrada
    printf("Numeros a serem mostrados: ");
    scanf("%d", &n);
    //Processamento
    for (i=1; i<=n; i++){
        fatorial*=i;
        //Sa�da
        printf("O fatorial de %d eh %d\n", i, fatorial);
    }
    return 0;
}
