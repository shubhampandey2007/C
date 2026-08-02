#include<stdio.h>
// Q. Write a program to store the first n fibonacci numbers.
// void fib(int arr[], int n);
int main(){
    int n;
    printf("enter a number(n >2): ");
    scanf("%d", &n);
    int fib[n];
    fib[0]=0;
    fib[1]=1;
    printf("%d\t", fib[0]);
    printf("%d\t", fib[1]);

    for(int i=2; i<n; i++){
        fib[i]=fib[i-1]+fib[i-2];
        printf("%d \t", fib[i]);
    }
    printf("\n");
    return 0;
}
// void fib(int arr[], int n){
//     int n=0; 
//     for(int i=0; i<n; i++){
        
//     }
// }