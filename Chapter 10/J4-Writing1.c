#include<stdio.h>
#include<string.h>
int main(){
    FILE *fptr;
    fptr= fopen("hi.txt", "w");
    char name[100];
    gets(name);
    fprintf(fptr, "%s", name);
    fclose(fptr);
}