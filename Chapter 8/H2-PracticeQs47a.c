#include <stdio.h>
/*
Q. Create a String firstName & lastName, to store details of the user and print all the 
   characters using a loop.
*/
int main(){
    char firstName[]= "Shubham";
    char lastName[]= "Pandey";

    for(int i=0; firstName[i] != '\0'; i++){
        printf("%c", firstName[i]);
    }
    printf("\n");
    for(int i=0; lastName[i] != '\0'; i++){
        printf("%c", lastName[i]);
    }
    return 0;
}