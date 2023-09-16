#include <stdio.h>

int main(){
    float d, c, r;

    printf("insira a cotacao do dolar: ");
    scanf("%f", &c);

    printf("insira a quantia em dolar: ");
    scanf("%f", &d);

    r=c*d;

    printf("seu valor em real e: %f,00 reais ", r);

    return 0;
}
