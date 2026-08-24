#include <stdio.h>

int main(){
    float med;
    
    printf("Media final: ");
    scanf("%f", &med);

    if (med >= 7) {
        printf("Aprovado");
    } else if (med >= 4) {
        printf("Final");
    } else {
        printf("Reprovado");
    }
    return 0;
}