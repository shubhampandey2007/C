#include <stdio.h>
#include <string.h>
// Q. Write a function named slice, which takes a string and returns a sliced string from index n to m.
void slice(char str[], int n, int m);
int main(){
    char str[]= "HelloWorld";
    slice(str, 3, 6);
}
void slice(char str[], int n, int m){
    char newStr[100];
    int j=0;
    for(int i=3; i<=6; i++, j++){
        newStr[j]= str[i];
    }
    newStr[j]= '\0';
    puts(newStr);
}
