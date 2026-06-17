#include<stdio.h>
#include<math.h>
// Q. Write a program to check if a number is divisible by 2 or not.
int main() {
    int x;
    printf("enter a number: ");
    scanf("%d", &x);
    printf("%d", x%2 == 0);
    return 0;
}