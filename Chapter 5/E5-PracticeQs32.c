#include<stdio.h>
// Q. Sum of the first n natural numbers.
int sum(int n);
int main(){
    int n;
    printf("enter the number n: ");
    scanf("%d", &n);
    printf("sum is %d\n", sum(n));
    return 0;
}
// recursive function
int sum(int n){
    if (n==1){
        return 1;
    }
    int sumNm1= sum(n-1);
    int sumN= sumNm1+n;
    return sumN;
}