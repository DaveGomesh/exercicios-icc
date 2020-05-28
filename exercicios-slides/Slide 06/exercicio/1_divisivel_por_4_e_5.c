#include <stdio.h>

int main(){
    int num;
    if(num % 4 == 0 && num % 5 == 0){
        printf("%i\n", num);
    }
    else{
        printf("Nao eh divisivel por 4 e por 5!\n");
    }
    return 0;
}