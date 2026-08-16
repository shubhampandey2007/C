#include<stdio.h>
// Q. Write a function to convert celcius to farhenheit.
float Temp(float n);
int main(){
    float n;    
    printf("enter the temp in celcius: ");
    scanf("%f", &n);
    // float TempN= Temp(n);
    printf("temp in farhenheit would be: %f", Temp(n));
    return 0;
}
float Temp(float n){
    float TempN= n*(9/5) + 32;
    return TempN;
}