#include <stdio.h>

int main(){
    int forma_pagamento, quantidade_parcelas;
    float valor_compra;

    printf("Informe o valor da compra: ");
    scanf("%f", &valor_compra);

    printf("=====FORMA DE PAGAMENTO=====\n");
    printf("1 - Pagamento a vista\n");
    printf("2 - Pagamento com cheque\n");
    printf("3 - Pagamento parcelado (ate 12x)\n");
    printf("OPCAO: ");
    scanf("%i", &forma_pagamento);

    if(forma_pagamento == 1){
        valor_compra -= valor_compra * 0.15;
        printf("=====A VISTA====\n");
        printf("Total: R$ %.2f\n", valor_compra);
    }
    else if(forma_pagamento == 2){
        valor_compra -= valor_compra * 0.10;
        printf("=====COM CHEQUE====\n");
        printf("Total: R$ %.2f\n", valor_compra);
    }
    else{
        valor_compra += valor_compra * 0.08;
        printf("=====PARCELADO====\n");
        printf("Quantidade de parcelas: ");
        scanf("%i", &quantidade_parcelas);
        printf("Total: R$ %.2f\n", valor_compra);
        printf("%i parcelas de R$ %.2f\n", quantidade_parcelas, valor_compra/quantidade_parcelas);
    }

    return 0;
}