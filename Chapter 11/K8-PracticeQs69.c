#include<stdio.h>
#include<stdlib.h>
//Q. Create an array of size 5(using calloc) & enter its values from the user.
int main(){
    int *ptr;
    ptr= (int*)calloc(5, sizeof(int));
    printf("enter 5 numbers: ");
    for(int i=0; i< 5; i++){
        scanf("%d", &ptr[i]);
    }
    for(int i=0; i< 5; i++){
        printf("%d\t", ptr[i]);
    }
}