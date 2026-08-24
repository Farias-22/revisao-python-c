#include <stdio.h>

int main(){
    float cel, fah;
    printf("Temperatura em Celsius: ");
    scanf("%f", &cel);

    fah = ((cel * 9.0) / 5) + 32;
    printf("Fahrenheit: %.2f F", fah);
    return 0;

}