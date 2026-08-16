#include <stdio.h>
int sum(int a, int b);

int main(){
    int a, b;
    printf("enter a number: ");
    scanf("%d", &a);
    printf("enter a number: ");
    scanf("%d", &b);

    int s= sum(a, b);
    printf("the sum is: %d", s);
    return 0;
}
int sum(int x, int y){
    return x+y;
}