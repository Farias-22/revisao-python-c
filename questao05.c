#include <stdio.h>

int main(){
    int a, b;
    
    printf("Primeiro valor: ");
    scanf("%d", &a);

    printf("Segundo valor: ");
    scanf("%d", &b);

    if (a > b){
        printf("Maior: %d", a);
    } else {
        printf("Maior: %d", b);
    }
    return 0;
}