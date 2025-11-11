#include<stdio.h>

int main(){

// different operator (operator precedence)
printf("for different operators\n");
printf("%d \n",  4 + 9 * 10);
printf("%d \n", 4 + 10 * 25/25);

// Associativity (for same operator or precedence)
printf("Associativity \n");
printf("%d \n", 4 * 3 / 6 * 2 );
printf("%d \n", 2 * 2 / 2 * 2 + 2 * 10);
printf("%d \n",  5 * 2 - 2 * 3);
printf("%d \n", 5 * 2 / 2 * 3);
printf("%d \n", 5 * (2/2) * 3);
printf("%d \n", 5 + 2 / 2 * 3);

return 0;
}