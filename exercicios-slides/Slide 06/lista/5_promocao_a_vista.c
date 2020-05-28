#include <stdio.h>

int main(){
    int quantidade_livros;
    float valor_criterioA, valor_criterioB;

    printf("Informe a quantidade de livros: ");
    scanf("%i", &quantidade_livros);

    valor_criterioA = quantidade_livros * 0.25 + 7.5; 
    valor_criterioB = quantidade_livros * 0.50 + 2.5; 

    printf("Valor no criterio A: R$ %.2f %s\n", valor_criterioA, valor_criterioA < valor_criterioB ? "(MELHOR OPCAO)" : "");
    printf("Valor no criterio B: R$ %.2f %s\n", valor_criterioB, valor_criterioA > valor_criterioB ? "(MELHOR OPCAO)" : "");


    return 0;
}