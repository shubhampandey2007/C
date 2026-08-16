#include<stdio.h>
// Q. Keep taking numbers as input from user until user enters a number which is multiple of 7.
int main(){
    int n;
    do{
        printf("enter a number: ");
        scanf("%d", &n);
        if(n%7!=0){
            printf("not divisible by 7 \n");
        }else {
            printf("divisible by 7 \n");
            printf("THANK YOU \n");
            break;
        }
    } while(1);
    return 0;
}