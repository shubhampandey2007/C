#include <stdio.h>
#include <string.h>
typedef struct Address{
    int houseNo;
    char Block;
    char city[100];
    char state[100];
} adds;
void storeAddress(adds add[]);
int main(){
    adds add[5];
    storeAddress(add);
    return 0;
}
void storeAddress(adds add[]){
    for(int i= 0; i<5; i++){
        printf("Enter the Address of person %d\n", i+1);
        printf("House No.: ");
        scanf("%d", &add[i].houseNo);
        printf("Block: ");
        scanf(" %c", &add[i].Block);
        printf("City: ");
        scanf("%s", add[i].city);
        printf("State: ");
        scanf("%s", add[i].state);
        printf("Address of person %d: %d-%c, %s, %s\n", i+1, add[i].houseNo, add[i].Block, add[i].city, add[i].state);
        printf("\n");
    }
}