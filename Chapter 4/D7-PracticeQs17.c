#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("enter an odd number: ");
    scanf("%d", &n);
    for(int i=1; i<=100; i++){
        if(n%2!=0){
            printf("VALID");
            break;
        }else{
            printf("INVALID \n");
            printf("enter again: ");
            scanf("%d", &n);
        }
    }
    return 0;
}