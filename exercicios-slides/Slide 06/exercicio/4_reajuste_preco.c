#include <stdio.h>

int main(){
    float preco;
    int venda_media;

    printf("Informe o preco atual: ");
    scanf("%f", &preco);

    printf("Informe a media de vendas: ");
    scanf("%i", &venda_media);

    if(venda_media < 500 && preco < 20){
        preco += preco * 0.10;
    }
    else if((venda_media >= 500 && venda_media < 1200) && (preco >= 20 && preco < 70)){
        preco += preco * 0.15;
    }
    else if(venda_media >= 1200 && preco >= 70){
        preco -= preco * 0.17;
    }

    printf("Novo preco: %.2f\n", preco);
    return 0;
}