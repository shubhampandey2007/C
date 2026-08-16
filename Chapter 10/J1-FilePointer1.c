#include<stdio.h>
int main(){
    FILE *fptr;
    fptr= fopen("hi.txt", "r");
    fclose(fptr);
    return 0;
}