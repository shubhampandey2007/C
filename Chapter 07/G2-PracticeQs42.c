#include<stdio.h>
// Q. Write a prog to enter price of 3 items and print their final cost with gst.
int main(){
    float price [3];
    printf("enter price 1: ");
    scanf("%f", &price[0]);

    printf("enter price 2: ");
    scanf("%f", &price[1]);

    printf("enter price 3: ");
    scanf("%f", &price[2]);

    printf("price of 3 items with gst is: %f", (price[0]+price[1]+price[2]) + (price[0]+price[1]+price[2]) *0.18);
    return 0;
}