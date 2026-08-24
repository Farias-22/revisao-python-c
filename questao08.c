#include <stdio.h>

int main(){
    int num;

    printf("Insira um numero inteiro: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Insira um numero inteiro e também positivo: ");
    }

    while (num >= 0) {
        printf("%d", num);
        num--;
    }
    return 0;
}