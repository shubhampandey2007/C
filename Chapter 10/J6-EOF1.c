#include <stdio.h>
int main(){
    FILE *fptr;
    fptr= fopen("hi.txt", "r");
    char ch;
    while(ch != EOF){
        ch= fgetc(fptr);
        printf("%c", ch);
    }
}