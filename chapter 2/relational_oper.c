#include<stdio.h>

int main() {


    // == operators (TO know weather to values are equal)
printf(" == operators \n");

    printf("%d \n", 4 == 4); // 1 or anything expect 0 means true
    printf("%d \n", 4 == 3); // 0 is false


    // > (greater than), >= (greater than or equals to) operator 
    // < (less than), <= (less than or equals to) operator
printf(" > , >= , < , <=  operators\n");
       
    printf("%d \n", 4 > 3);
    printf("%d \n", 3 > 4);
    printf("%d \n", 4 >= 3);
    printf("%d \n", 3 >= 4);
    printf("%d \n", 3 > 3);
// for < , <= same as above but opposite 
printf(" < <= operators\n");

    printf("%d \n", 4 < 3);
    printf("%d \n", 3 <= 4);
    printf("%d \n", 3 < 4);
// != Not equal to
printf(" != (Not equal to) \n");

    printf("%d \n", 4 != 4);
    printf("%d \n", 4 != 5);

    return 0;
}