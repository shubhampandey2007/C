#include<stdio.h>
// Q. Print the sum of first n Natural numbers.
int main(){
    int n;
    printf("enter a number: ");
    scanf("%d", &n);

    int sum = 0;
    for(int i=1; i<=n; i++) {
        sum = sum + i; // sum+= 1
    }

    printf("the sum is: %d", sum);

    return 0;
}