#include <stdio.h>

int main(){

    int *ptr;

    int a[] = {1, 2, 3, 4, 5};

    ptr = a;

    printf("%u=>%d\n", ptr, *ptr);



    return 0;
}