#include<stdio.h>
#include<math.h>
// Q. Write functions to calculate the area of a square, a circle and a rectangle.
void Area(char c);
int main(){
    char c;
    printf("enter shape (s for square, c for circle and r for rectangle): ");
    scanf("%c", &c);
    Area(c);
    return 0;
}
void Area(char c){
    if (c== 's'){
        printf("the shape is a square!\n");
        float a;
        printf("enter the lenght of the side: ");
        scanf("%f", &a);
        printf("area of the the square is: %f\n", pow(a, 2));
    }else if(c== 'c'){
        printf("the shape is a circle!\n");
        float r;
        printf("enter the radius of the circle: ");
        scanf("%f", &r);
        printf("area of the the circle is: %f\n", 3.14*pow(r, 2));
    }else if(c== 'r'){
        printf("the shape is a rectangle!\n");
        float l;
        printf("enter the length of the rectangle: ");
        scanf("%f", &l);
        float b;
        printf("enter the breadth of the rectangle: ");
        scanf("%f", &b);
        printf("area of the the rectangle is: %f\n", l*b);
    }else{
        printf("NOT A VALID SHAPE!!\n");
        printf("ENTER AGAIN!!\n");
    }
}