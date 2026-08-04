#include <stdio.h>
/*
Q. Ask a user to enter their firstName & print it back to them.
   
   Also try this with their fullName.
*/
int main(){
    // char firstName[50];
    // printf("enter your first name: ");
    // scanf("%s", firstName);
    // printf("%s", firstName);

    char fullName[100];
    fgets(fullName, 100, stdin);
    puts(fullName);
    return 0;
}