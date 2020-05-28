#include <stdio.h>

int main(){
    float valor_piso_m2 = 15.5, valor_pintura_m2 = 10;
    float tamanho_sala_m2 = 3*5, altura_parede = 2.6,  tamanho_porta_m2 = 2.2*0.8, tamanho_janela_m2 = 2*2;
    //1 porta e 1 janela
    
    float total_parede_pintada_m2 = (altura_parede*5*2 + altura_parede*3*2) - tamanho_porta_m2 - tamanho_janela_m2;

    printf("Tamanho da sala: %.2f m2\n", tamanho_sala_m2);
    printf("Tamanho das paredes: %.2f m2 e %.2f m2\n", altura_parede*5, altura_parede*3);
    printf("Total de parede a ser pintada: %.2f m2\n\n", total_parede_pintada_m2);


    printf("Custo para colocar o piso: R$ %.2f\n", tamanho_sala_m2 * valor_piso_m2);
    printf("Custo total da pintura: R$ %.2f\n", total_parede_pintada_m2 * valor_pintura_m2);
    printf("Custo da reforma: R$ %.2f\n", tamanho_sala_m2 * valor_piso_m2 + total_parede_pintada_m2 * valor_pintura_m2);


    return 0;
}