#include <stdio.h>

//escreva um algortimo que receba o salário atual e calcule um aumento e imposto

int main(){
    //Declaração de variáveis
    float salAtual, salAtualizado, salLiquido;
    //Entrada
    printf("Qual seu salario atual? R$");
    scanf("%f", &salAtual);
    //Processamento
    if(salAtual>=415){
        salAtualizado = salAtual + (salAtual*0.25);
    }
    if(salAtual>=900){
        salAtualizado = salAtual + (salAtual*0.2);
    }
    if(salAtual>1500){
        salAtualizado = salAtual + (salAtual*0.175);
    }
    if(salAtualizado<600){
        salLiquido = salAtualizado;
    }
    if(salAtualizado>=600){
        salLiquido = salAtualizado - (salAtualizado*0.05);
    }
    if(salAtualizado>=1500){
        salLiquido = salAtualizado - (salAtualizado*0.12);
    }
    if(salAtualizado>2700){
        salLiquido = salAtualizado - (salAtualizado*0.175);
    }
    //Saída
    printf("\nSalario atualizado e sem imposto R$");
    printf("%.2f", salAtualizado);
    printf("\nSalario atualizado com imposto R$");
    printf("%.2f", salLiquido);
    return 0;
}
