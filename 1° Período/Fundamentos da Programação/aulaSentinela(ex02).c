#include <stdio.h>

// Crie um menu de controle de produtos e estoque usando switch e do...while

int main(){
    //Declaração de variáveis
    int opcao;
    //Entrada
    printf("Digite uma opcao\n");
    printf("1 - adicionar produto\n");
    printf("2 - Remover produto\n");
    printf("3 - Consultar estoque\n");
    printf("0 - Sair\n");
    scanf("%d", &opcao);
    //Processamento
    do{
        switch (opcao){
        case 1:
            printf("Produto adicionado\n");
            printf("Digite uma opcao\n");
            printf("1 - adicionar produto\n");
            printf("2 - Remover produto\n");
            printf("3 - Consultar estoque\n");
            printf("0 - Sair\n");
            scanf("%d", &opcao);
            break;
        case 2:
            printf("Produto removido\n");
            printf("Digite uma opcao\n");
            printf("1 - adicionar produto\n");
            printf("2 - Remover produto\n");
            printf("3 - Consultar estoque\n");
            printf("0 - Sair\n");
            scanf("%d", &opcao);
            break;
        case 3:
            printf("Estoque consultado\n");
            printf("Digite uma opcao\n");
            printf("1 - adicionar produto\n");
            printf("2 - Remover produto\n");
            printf("3 - Consultar estoque\n");
            printf("0 - Sair\n");
            scanf("%d", &opcao);
            break;
        default:
            printf("Digite um valor valido\n");
            printf("1 - adicionar produto\n");
            printf("2 - Remover produto\n");
            printf("3 - Consultar estoque\n");
            printf("0 - Sair\n");
            scanf("%d", &opcao);
            break;
        }
    }while(opcao!=0);
    //Saída
    printf("FIM!");
    return 0;
}
