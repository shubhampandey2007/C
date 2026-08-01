#include<stdio.h>
// Q. Will the address output be same? (call by value)
void printAddress(int n);
int main(){
    int n;
    printAddress(n);
    printf("%p\n", &n);
    return 0;
}
void printAddress(int n){
    printf("%p\n", &n);
}