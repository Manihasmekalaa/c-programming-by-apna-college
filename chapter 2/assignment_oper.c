#include <stdio.h>

int main() {

    int a = 5;
    int b = 2;

    printf("%d \n", a += b); // a = a + b 
    printf("%d \n", a -= b); // same for all
    printf("%d \n", a *= b);
    printf("%d \n", a /= b);
    printf("%d \n", a %= b);
    return 0;
}