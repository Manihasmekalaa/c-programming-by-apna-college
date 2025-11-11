#include <stdio.h>

int main() {

//And operator &&
printf("AND operators && \n");

     printf("%d \n", 3 > 2 && 4 > 3);
     printf("%d \n", 4 > 2 && 3 > 4);
     printf("%d \n", 2 > 3 && 6 > 7);

// OR operators
printf("OR operators \n");

     printf("%d \n", 3 > 2 || 4 > 2);
     printf("%d \n", 3 > 2 || 1 > 2);
     printf("%d \n", 1 > 4 || 2 > 3);

// NOT operators
printf("NOT operators ! \n ");

    printf("%d \n", 3 > 2);
    printf("%d \n", !3 > 2 ); // not oper changes true to false and false to true

return 0; 
}

    