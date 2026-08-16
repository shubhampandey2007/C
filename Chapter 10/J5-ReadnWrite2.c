#include<stdio.h>
#include<string.h>
// WRITE CHARACTER
int main(){
    FILE *fptr;
    fptr= fopen("hi.txt", "w");
    for(int i=0; i<=10; i++){
        char ch;
        scanf("%c", &ch);
        fputc(ch, fptr);
    }
}