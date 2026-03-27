#include <stdio.h>

int main(){

    int a= 215;

    int *ptr;

    ptr = &a;

    printf("Address is %u\n", ptr+1);



    return 0;
}