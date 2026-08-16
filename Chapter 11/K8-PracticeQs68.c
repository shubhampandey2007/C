#include<stdio.h>
#include<stdlib.h>
//Q. Allocate memory for 5 numbers. Then dynamically increase it to 8 numbers.
int main(){
    int *ptr;
    ptr= (int*)calloc(5, sizeof(int));
    for(int i=0; i< 5; i++){
        printf("enter a number: ");
        scanf("%d", &ptr[i]);
    }
    for(int i=0; i< 5; i++){
        printf("%d\t", ptr[i]);
    }
    printf("\n");
    realloc(ptr, 8);
    for(int i=0; i< 8; i++){
        printf("enter a number: ");
        scanf("%d", &ptr[i]);
    }
    for(int i=0; i< 8; i++){
        printf("%d\t", ptr[i]);
    }
}