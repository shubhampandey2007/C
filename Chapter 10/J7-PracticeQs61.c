#include<stdio.h>
//Q. Make a program to read 5 integers from a file.
int main(){
    FILE *fptr;
    fptr= fopen("hi.txt", "r");
    int n;
    for(int i=1; i<=5; i++){
        fscanf(fptr, "%d", &n);
        printf("%d", n);
    }
}