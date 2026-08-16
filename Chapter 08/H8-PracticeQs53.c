#include <stdio.h>
#include <string.h>
// Q. Write a function to count the occurance of vowels in a string.
int count(char str[]);
int main(){
    char str[100];
    fgets(str, 100, stdin);
    printf("%d", count(str));
}
int count(char str[]){
    int count=0;
    for(int i=0; str[i] != '\0'; i++){
        if(str[i] == 'a'|| str[i] == 'e'||str[i] == 'i'||str[i] == 'o'||str[i] == 'u'||str[i] == 'A'||str[i] == 'E'||str[i] == 'I'||str[i] == 'O'||str[i] == 'U'){
        count++;
    }
    }
    return count;
}