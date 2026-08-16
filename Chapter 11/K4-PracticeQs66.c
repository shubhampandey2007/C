#include<stdio.h>
#include<stdlib.h>
//Q. Write a program to allocate memory of size n, where n is entered by the user.
int main(){
    int *ptr;
    int n;
    printf("enter n: ");
    scanf("%d", &n);
    ptr= (int*)calloc(n, sizeof(int));
    for(int i=0; i< n; i++){
        printf("enter a number: ");
        scanf("%d", &ptr[i]);
    }
    for(int i=0; i< n; i++){
        printf("%d\n", ptr[i]);
    }
}