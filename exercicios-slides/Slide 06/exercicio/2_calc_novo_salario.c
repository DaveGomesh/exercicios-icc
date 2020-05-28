#include <stdio.h>

int main(){
    float salario=100;

    printf("Informe o salario: ");
    scanf("%f", &salario);

    if(salario >= 415 && salario <= 750){
        salario += salario * 0.2;
    }
    else if(salario > 750 && salario <= 1500){
        salario += salario * 0.15;
    }
    else if(salario > 1500){
        salario += salario * 0.125;
    }

    printf("%.2f\n", salario);

    return 0;
}