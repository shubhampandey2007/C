#include<stdio.h>
#include<math.h>
/*
Q. Homework Set:
   a. Write a program to check if a given number is
      Armstrong number or not.
      (Search what is Armstrong number)

    b. Write a program to check if the given number is a
       natural number.
       (Natural numbers start from 1)
*/
int main() {
    int a, b, c;
    printf("enter a: ");
    scanf("%d", &a);
    printf("enter b: ");
    scanf("%d", &b);
    printf("enter c: ");
    scanf("%d", &c);

    printf("%d \n", 100*a + 10*b + 1*c == a*a*a + b*b*b + c*c*c);
    return 0;
}