#include <stdio.h>

int main(){
    int num;
    printf("Numero: ");
    scanf("%d", &num);

    if (num % 2 == 0){
        printf("Par");
    } else {
        printf("Impar");
    }
    return 0;
}