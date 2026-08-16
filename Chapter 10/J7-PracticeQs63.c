#include<stdio.h>
//Q. Write a program to write all the odd no.s from 1 to n in a file.
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    FILE *fptr;
    fptr= fopen("hi.txt", "w");
    for(int i=1; i<=n; i++){
        if(i%2 != 0){
            fprintf(fptr, "%d\t", i);
        }
    }
    fclose(fptr);
    return 0;
}