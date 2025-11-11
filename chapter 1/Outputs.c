#include <stdio.h>

int main()
{

    int a = 0;
    int b = 0;
    printf("enter a: \n");
    scanf("%d", &b);

    printf("enter b \n");
    scanf("%d", &a);

    printf("what is your age %d", a + b);

    return 0;
}

// gcc Outputs.c -o Outputs
// ./Outputs