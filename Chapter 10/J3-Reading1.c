#include<stdio.h>
#include<string.h>
int main(){
    FILE *fptr;
    fptr= fopen("hi.txt", "r");
    char arr[5];
    fscanf(fptr, "%s", arr);
    puts(arr);
    fclose(fptr);
}