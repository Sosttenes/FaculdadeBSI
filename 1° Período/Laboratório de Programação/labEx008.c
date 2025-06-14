#include <stdio.h>

//Digite um número e o programa deve fazer uma lista com todos os números de 1 até o listado, mostrando os fatoriais de cada um.

int main(){
    //Declaração de variáveis
    int n, i, fatorial=1;
    //Entrada
    printf("Numeros a serem mostrados: ");
    scanf("%d", &n);
    //Processamento
    for (i=1; i<=n; i++){
        fatorial*=i;
        //Saída
        printf("O fatorial de %d eh %d\n", i, fatorial);
    }
    return 0;
}
