#include<stdio.h>
// Q. Print the factorial of a number n.
int main(){
    int n;
    printf("enter a number: ");
    scanf("%d", &n);
    int factorial=1; 
    for(int i=1; i<=n; i++){
        factorial=factorial*i;
    }
    printf("the factorial of the number is: %d \n", factorial);
    return 0;
}