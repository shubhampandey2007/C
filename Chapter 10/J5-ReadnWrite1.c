#include<stdio.h>
#include<string.h>
// READ CHARARCTER
int main(){
    FILE *fptr;
    fptr= fopen("hi.txt", "r");
    for(int i=0; fgetc(fptr)== '\0'; i++){ 
        printf("%c", fgetc(fptr));
    }
}