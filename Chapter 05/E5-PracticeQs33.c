#include<stdio.h>
// Q. Find the factorial of n.
int fact(int n);
int main(){
    int n;
    printf("enter a number n: ");
    scanf("%d", &n);
    printf("factorial of n is: %d\n", fact(n));
    return 0;
}
int fact(int n){
    if(n==1){
        return 1;
    }
    int factN=fact(n-1)*n;
    return factN;
}