#include<stdio.h>
int main(){
    // Q. Print the sum of first n Natural numbers. (Also print them in reverse)

    int n;
    printf("enter a number: ");
    scanf("%d", &n);
    int sum= 0;
    for (int i=1, j=n; i<=n && j>=1; i++, j--){
        sum= sum+ i;
        printf("%d \n", j);
    }
    printf("sum is: %d", sum);
    return 0;
}