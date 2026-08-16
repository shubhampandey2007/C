#include<stdio.h>
// Q. Write a function to print n terms of the fibonacci sequence.
int fib(int n);
int main(){
    int n;
    printf("enter a number n: ");
    scanf("%d", &n);
    // fib(n);
    printf("n term of the fibonacci is: %d", fib(n));
    return 0;
}
int fib(int n){
if(n==0){
    return 0;
} 
if(n==1){
    return 1;
}
int fibN=fib(n-1)+fib(n-2);
// printf("fib of %d is: %d\n", n, fibN);
return fibN;
}