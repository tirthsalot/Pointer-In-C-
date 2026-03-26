#include <stdio.h>

int main(){

    int a = 215;

    int *ptr = &a; 
    
    printf("Address of a: %p\n", &a);
    printf("Value of a: %d\n", a);



    return 0;
}