#include<stdio.h>
#include<math.h>
/*
HOMEWORK SET
a. Write a program to print the average of 3 numbers.
b. Write a program to check if given character is digit or not.
c. Write a program to print the smallest number
*/
int main() {
    int a;
    printf("enter any character: ");
    scanf("%d", &a);
    printf("%d", a >= 0 && a <= 9);
    return 0;
}
