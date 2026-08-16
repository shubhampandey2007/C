#include<stdio.h>
//Q. 2 number a & b are written in a file. Write a program to replace them with their sum;
int main(){
    FILE *fptr;
    int p1, p2;
    fptr= fopen("hi.txt", "w");
    printf("Enter a and b: ");
    scanf("%d %d", &p1, &p2);
    fprintf(fptr, "%d %d", p1, p2);
    fclose(fptr);
    fptr= fopen("hi.txt", "r");
    int n1, n2;
    fscanf(fptr, "%d", &n1);
    fscanf(fptr, "%d", &n2);
    fclose(fptr);
    fptr= fopen("hi.txt", "w");
    fprintf(fptr, "%d", n1+n2);
    fclose(fptr);
    fptr= fopen("hi.txt", "r");
    int sum;
    fscanf(fptr, "%d", &sum);
    printf("%d", sum);
    fclose(fptr);
}