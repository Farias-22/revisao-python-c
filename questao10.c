#include <stdio.h>

int main(){
    int qnt = 0;

    for (int i = 0; i < 5; i++) {
        int num;
        printf("Numero: ");
        scanf("%d", &num);

        if (num > 0) {
            qnt += 1;
        }

        printf("Positivos: %d", qnt);
    }
    return 0;
}