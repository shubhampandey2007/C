#include<stdio.h>
/* 
Q. Write a function to calculate the sum, the product, and the average of 2 numbers. 
   Print that avg in the main function.
*/
// Online C compiler to run C program online
void doWork(int a, int b, int *sum, int *prod, int *avg);

int main(){
    int a, b;
    printf("enter the numbers a and b: ");
    scanf("%d and %d", &a, &b);
    int sum, prod, avg;
    doWork(a, b, &sum, &prod, &avg);
    printf("sum = %d, prod = %d, avg = %d \n", sum, prod, avg);
    return 0;
}

void doWork(int a, int b, int *sum, int *prod, int *avg){
    *sum = a+b;
    *prod = a*b;
    *avg = (a+b)/2;
}