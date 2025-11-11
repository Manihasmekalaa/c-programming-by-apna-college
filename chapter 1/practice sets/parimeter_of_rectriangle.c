// perimeter of rectriangle
/*
perimeter is p = 2(l+w)
*/
#include<stdio.h>

int main(){

int length = 0;
int width = 0;

printf("lenght of a rectriangle: \n"); // input of len
scanf("%d", &length);

printf("width of the rectriangle: \n"); // input of width
scanf("%d", &width);

int sum = length + width; // sum of them if you want sum method
// int perimeter = 2 * sum;
int perimeter = 2 * ( length + width ); // direct multiplication
 printf("The perimeter of rectriangle is %d", perimeter);

    return 0;
}

/*

cd "C:\Users\manih\OneDrive\Desktop\c programming by apna college\CHAPTER 1\practice sets"
gcc parimeter_of_rectriangle.c -o parimeter_of_rectriangle
./parimeter_of_rectriangle

*/