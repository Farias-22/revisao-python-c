#include <stdio.h>

int main(){
    int num;

    printf("N: ");
    scanf("%d", &num);

    int soma = 0;
    for (int i = 1; i <= num; i++) {
        soma += i;
        printf("Soma: %d", soma);
    }
    return 0;
}