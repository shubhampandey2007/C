#include<stdio.h>
#include<string.h>
//Q. Make a structure to store Bank Account information of a customer of ABC Bank. Also make an alias for it.
typedef struct bank{
    char name[100];
    long long int acc;
}cus;
int main(){
    printf("ABC BANK\n");
    printf("ENTER DETAILS OF THE CUSTOMER\n");
    cus c1;
    printf("Enter Name: ");
    gets(c1.name);
    printf("Enter Account Number: ");
    scanf("%lld", &c1.acc);
    printf("\n");
    printf("Name of Customer: ");
    puts(c1.name);
    printf("Account Number: %lld", c1.acc);
}