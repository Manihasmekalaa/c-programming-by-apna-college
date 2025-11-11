#include<stdio.h>

int main() {

float r = 0.0;
float pi = 3.14;

printf("Radius of circle: \n");
scanf("%f", &r);

float sum = r * r;

printf("The radius of circle is %f \n", pi * sum);
    return 0;
}

// gcc area_of_circle.c -o area_of_circle
//./area_of_circle