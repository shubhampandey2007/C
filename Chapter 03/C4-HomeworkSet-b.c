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
    float x;
    printf("enter a no. : ");
    
    if (scanf("%f", &x) != 1){
        printf("Not a natural number");
    }
    else if(x >= 1 && x == (int)x) {
        printf("given no. is a natural number");
    }
    else{
        printf("Not a natural number");
    }
    
    return 0;
}