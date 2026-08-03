#include <stdio.h>
/*
Q. Create a String firstName & lastName, to store details of the user and print all the 
   characters using a loop. 
   (USING FUNCTIONS)
*/
void printName(char arr[]);
int main(){
    char firstName[]= "Shubham";
    char lastName[]= "Pandey";
    printName(firstName);
    printName(lastName);
    return 0;
}
void printName(char arr[]){
    for(int i=0; arr[i] != '\0'; i++){
        printf("%c", arr[i]);
    }
    printf("\n");
}