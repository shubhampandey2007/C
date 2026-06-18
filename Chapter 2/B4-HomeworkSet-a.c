#include<stdio.h>
#include<math.h>
/*
HOMEWORK SET
a. Write a program to print the average of 3 numbers.
b. Write a program to check if given character is digit or not.
c. Write a program to print the smallest number
*/
int main() {
    int a, b, c;
    printf("enter a: ");
    scanf("%d", &a);
    printf("enter b: ");
    scanf("%d", &b);
    printf("enter c: ");
    scanf("%d", &c);

    printf("the average of the 3 given numbers is: %d", (a+b+c)/3);
    return 0;
}