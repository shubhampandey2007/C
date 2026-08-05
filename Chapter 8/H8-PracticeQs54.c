#include <stdio.h>
#include <string.h>
// Q. Check if a given character is present in a string or not.
void check(char str[], char ch);
int main(){
    char ch= 'a';
    char str[100];
    printf("enter a word/ sentence to see if %c is present in it: ", ch);
    fgets(str, 100, stdin);
    check(str, ch);
}
void check(char str[], char ch){
    for(int i=0; str[i] != '\0'; i++){
        if(str[i] == ch){
        printf("YES! %c is present", ch);
        return;
    }
    }
    printf("NO! %c is not present", ch);
}