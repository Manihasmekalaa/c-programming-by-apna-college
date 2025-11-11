#include<stdio.h>

int main() {

int a = 0;
int b = 0;

printf("Enter a \n");
scanf("%d", &a);

printf("Enter b \n");
scanf("%d", &b);

printf("sum of two is %d", a + b);
    return 0;
}

// type in terminal to run
// gcc inputs.c -o inputs
// ./inputs