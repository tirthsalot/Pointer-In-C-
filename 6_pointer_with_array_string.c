#include <stdio.h>

int main(){

    int *ptr;

    int array[] = {1, 2, 3, 4, 5};
    ptr = array;

    for(int i = 0; i < 5; i++){
        printf("%u=> %d\n", ptr + i, *(ptr + i));
        
    }


    return 0;
}