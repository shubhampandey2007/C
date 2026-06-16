#include<stdio.h>
// Q. Write a program to calculate the area of a square? (side is given)
int main() {
    int side;
    printf("the length of the give side is: ");
    scanf("%d", &side);

    printf("the area of the square is: %d", side * side);
    return 0;

}