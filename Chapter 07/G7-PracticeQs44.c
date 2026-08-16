#include<stdio.h>
// Q. Write a function to reverse an array.
void doReverse(int arr[], int n);
void printArr(int arr[], int n);

int main(){
    int arr[]= {1, 2, 3, 4, 5, 6};
    doReverse(arr, 6);
    printArr(arr, 6);
    return 0;   
}
void doReverse(int arr[], int n){
    for(int i= 0; i<n/2; i++){
        int firstVal= arr[i];
        int secondVal= arr[n-i-1];
        arr[i]= secondVal;
        arr[n-i-1]= firstVal;
    }
}
void printArr(int arr[], int n){
    for(int i= 0; i< n; i++){
        printf("%d \t", arr[i]);
    }
}