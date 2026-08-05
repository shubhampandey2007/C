#include <stdio.h>
#include <string.h>
int main(){
    char firstStr[]= "Hello";
    char secStr[]= "World";
    strcat(firstStr, secStr);
    puts(firstStr);
    return 0;
}