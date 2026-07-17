#include<stdio.h>
// Print the table of the number input by the user.
int main(){
    int n;
    printf("enter a number: ");
    scanf("%d", &n);
    int product;
    for(int i=1; i<=10; i++){
        product=n*i;
        printf("%d \n", product);
    }
    return 0;
}