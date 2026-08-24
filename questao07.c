#include <stdio.h>

int main(){
    int num;
    
    printf("Numero: ");
    scanf("%d", &num);

    if (num >= 10 && num <= 20) {
        printf("Dentro do intervalo");
    } else {
        printf("Fora do intervalo");
    }
    return 0;
}