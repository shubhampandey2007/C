#include<stdio.h>
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if(number >= 0) {
        printf("number is positive \n");
        if(number % 2 == 0) {
            printf("Even \n");
        }
        else{
            printf("Odd \n");
        }
    }
    else{
        printf("number is negative \n");
    }
    return 0;
}