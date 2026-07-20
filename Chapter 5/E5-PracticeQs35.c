#include<stdio.h>
int calcPercentage(int sci, int math, int sans);
int main(){
    int sci, math, sans;
    printf("enter the marks of science: ");
    scanf("%d", &sci);
    printf("enter the marks of maths: ");
    scanf("%d", &math);
    printf("enter the marks of sanskrit: ");
    scanf("%d", &sans);
    printf("total percentage: %d", calcPercentage(sci, math, sans));
    return 0;
}
int calcPercentage(int sci, int math, int sans){
    return (sci+math+sans)/3;
}