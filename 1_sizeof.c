#include <stdio.h>

int main(){

    int a = 10;

    float b = 3.14;

    char c = 'A';

    double d = 3.14159;

    printf("Size of int: %lu bytes\n", sizeof(a));
    printf("Size of float: %lu bytes\n", sizeof(b));
    printf("Size of char: %lu bytes\n", sizeof(c));
    printf("Size of double: %lu bytes\n", sizeof(d));

    return 0;
}
