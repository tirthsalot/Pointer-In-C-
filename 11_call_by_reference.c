
#include <stdio.h>

int callByReference(int *num)
{

    *num = 500;
}

int main()
{

    int numberArgument = 1000;

    int *ptr;

    ptr = &numberArgument;

    int result = callByReference(ptr);

    printf("number argument %d\n", numberArgument);

    return 0;
}