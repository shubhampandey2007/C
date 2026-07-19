#include<stdio.h>
// Changes to parameters in function don't change the values in calling function.
void calculatePrice(float value);

int main(){
    float value= 100.0;
    calculatePrice(value);
    printf("the value is: %f \n", value);
    return 0;
}

void calculatePrice(float value){
    value = value + (value*0.18);
    printf("the final price is: %f \n", value);
}