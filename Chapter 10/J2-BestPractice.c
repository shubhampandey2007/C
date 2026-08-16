#include<stdio.h>
//Check if file exists before reading from it.
int main(){
    FILE *fptr;
    fptr= fopen("newhi.txt", "r");
    if(fptr==NULL){
        printf("File doesn't exist\n");
    }else{
        fclose(fptr);
    }
    return 0;
}