#include <stdio.h>
#include <string.h>
int main(){
    char name[100];
    printf("enter the name: ");
    // fgets(name, 100, stdin);  [it takes name\n\0, but strlen only removes \0]
    gets(name);
    int length= strlen(name);
    printf("length of the name is: %d", length);
    return 0;
}