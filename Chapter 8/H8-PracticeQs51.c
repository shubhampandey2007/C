#include <stdio.h>
#include <string.h>
// Q. Find the salted form of a password entered by the user if the salt is "123" & added at the end. 
void Salting(char password[]);
int main(){
    char password[100];
    scanf("%s", password);
    Salting(password);
    return 0;
}
void Salting(char password[]){
    char newPass[200];
    char salt[]= "123";
    strcpy(newPass, password); //newPass = "test"
    strcat(newPass, salt); //newPass = "test123"
    puts(newPass);
}