#include <stdio.h>
#include <string.h>
int main(){
    char firstStr[100];
    char secStr[100];
    gets(firstStr);
    gets(secStr);
    printf("%d", strcmp(firstStr, secStr));
    return 0;
}