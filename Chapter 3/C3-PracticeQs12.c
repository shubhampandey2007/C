#include<stdio.h>
#include<math.h>
//Q. Write a Program to find if a character entered by user is upper case or not.
int main() {
    char alphabet;
    printf("Enter an Alphabet: ");
    scanf("%c", &alphabet);
    if(alphabet >= 'A' && alphabet <= 'Z') {
        printf("Upper Case");
    }
    else if (alphabet >= 'a' && alphabet <= 'z') {
        printf("Lower Case");
    }
    else {
        printf("NOT AN ALPHABET!");
    }
    return 0;
}