#include <stdio.h>
int storeTables(int arr[][10], int n, int number);
int main(){
    int tables[2][10];
    storeTables(tables, 0, 2);
    storeTables(tables, 1, 3);

    for(int i=0; i<10; i++){
        printf("%d \t", tables[0][i]);
    }
    for(int i=0; i<10; i++){
        printf("%d \t", tables[1][i]);
    }
    return 0;
}
int storeTables(int arr[][10], int n, int number){
    for(int i=1; i= 10; i++){
        arr[n][i]= i*number;
    }
}