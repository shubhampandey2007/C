#include<stdio.h>
// Q. Print no.s from 0 to n. (n should be entered by the user)
int main(){ 
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    
    for (int i= 0; i <=n; ++i){
        printf("%d \n", i);
    }
    return 0;
}