// area of square 
/*
area is side * side
*/
#include<stdio.h>

int main() {

    int side = 0;

printf("Lenght of a side \n"); // so take input from user
scanf("%d", &side); 

    int area = side * side; // store the vaule and calucate it 

printf("The Area of Square is %d", area); // output 

    return 0;
}

/*
compilation

cd "C:\Users\manih\OneDrive\Desktop\c programming by apna college\CHAPTER 1\practice sets"

gcc area_of_square.c -o area_of_square

./area_of_square

*/