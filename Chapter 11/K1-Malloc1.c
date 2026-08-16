#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    ptr= (int*)malloc(5*sizeof(int));
    ptr[0]= 4;
    ptr[1]= 6;
    ptr[2]= 5;
    ptr[3]= 2;
    ptr[4]= 3;
    
    for(int i=0; i<5; i++){
        printf("%d\t", ptr[i]);
    }
}