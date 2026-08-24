#include <stdio.h>

int main(){
    int num1;
    printf("Primeiro valor: ");
    scanf("%d", &num1);

    int num2;
    printf("Segundo valor: ");
    scanf("%d", &num2);

    int soma = (num1 + num2);

    printf("Soma: %f");
    return 0;
}