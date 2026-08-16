#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    ptr= (int*)malloc(3* sizeof(int));
    ptr[0]=1;
    ptr[1]=2;
    ptr[2]=3;
    realloc(ptr, 4);
    ptr[3]=4;
    for(int i=0; i<4; i++){
        printf("%d\t", ptr[i]);
    }
}