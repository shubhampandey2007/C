#include<stdio.h>
// Q. Write a function that prints Namaste if the user is Indian and Bonjour if the user is French.

void printNamaste();
void printNamaste(){
    printf("Namaste \n");
}
void printBonjour();
void printBonjour(){
    printf("Bonjour \n");
}

int main(){
    char n;
    printf("enter your nationality (i for Indian and f for French): ");
    scanf("%c", &n);
    if(n == 'i'){
        printNamaste();
    } else if(n == 'f'){
        printBonjour();
    } else{
        printf("INVALID");
    }    return 0;
}