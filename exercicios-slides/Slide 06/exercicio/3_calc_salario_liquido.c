#include <stdio.h>

int main(){
    float salario;

    printf("Informe o salario: ");
    scanf("%f", &salario);

    printf("Salario: %.2f\n", salario);

    //Calculo do aumento
    if(salario >= 415 && salario <= 900){
        salario += salario * 0.25;
    }
    else if(salario > 900 && salario <= 1500){
        salario += salario * 0.20;
    }
    else if(salario > 1500){
        salario += salario * 0.175;
    }

    //Calculo do Imposto
    if(salario >= 600 && salario <= 1500){
        salario -= salario * 0.05;
    }
    else if(salario > 1500 && salario <= 2700){
        salario -= salario * 0.12;
    }
    else if(salario > 2700){
        salario -= salario * 0.175;
    }

    printf("Salario Liquido: %.2f\n", salario);

    return 0;
}
