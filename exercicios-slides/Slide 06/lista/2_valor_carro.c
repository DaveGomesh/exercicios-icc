#include <stdio.h>
#include <stdlib.h>

int main(){
    float preco_fabrica, percentual_lucro, percentual_impostos;
    float valor_final,   lucros,           impostos;

    printf("Infome o preco de fabrica: ");
    scanf("%f", &preco_fabrica);

    printf("Infome o percentual de lucro: ");
    scanf("%f", &percentual_lucro);

    printf("Infome o percentual de impostos: ");
    scanf("%f", &percentual_impostos);

    system("cls");

    lucros = preco_fabrica * percentual_lucro;
    impostos = preco_fabrica * percentual_impostos;
    valor_final = preco_fabrica + lucros - impostos;

    printf("Lucros do distribuidor: %.2f\n", lucros);
    printf("Impostos: %.2f\n", impostos);
    printf("Valor final do veiculo: %.2f\n", valor_final);

    return 0;
}