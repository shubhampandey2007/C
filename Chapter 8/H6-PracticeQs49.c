#include <stdio.h>
// Q. Make a program that inputs user's name and orints it's length.
int countLength(char arr[]);
int main(){
    char name[100];
    printf("enter the name: ");
    fgets(name, 100, stdin);
    printf("length of the name is: %d", countLength(name));
    return 0;
}
int countLength(char arr[]){
    int count= 0;
    for(int i= 0; arr[i] != '\0'; i++){
        count++;
    }
    return count-1; //(null was also included)
}