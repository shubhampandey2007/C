#include<stdio.h>
int main(){
    int age= 22;
    int _age= 23;
    int *ptr= &age;
    int *_ptr= &_age;

    printf("%u and %u difference is: %u\n", ptr, _ptr, ptr-_ptr);
    _ptr= &age;
    printf("comparison: %u\n", _ptr == ptr);
    return 0;
}