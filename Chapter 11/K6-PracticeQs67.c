#include<stdio.h>
#include<stdlib.h>
//Q. In Qs 66, free the memory allocted in calloc.
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
    free(ptr);
    for(int i=0; i< n; i++){
        ptr[i]=0;
        printf("%d\n", ptr[i]);
    }
}
