#include<stdio.h>
// char
int main(){
    char star= '*';
    char *ptr= &star;
    printf("ptr = %u \n", ptr);
    ptr++;
    printf("ptr = %u \n", ptr);
    ptr--;
    printf("ptr = %u \n", ptr);
    return 0;
}