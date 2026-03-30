
#include <stdio.h>

int callByValue(int num)
{

    num = 1000;
}

int main()
{

    int numberArgument = 10;

    int result = callByValue(numberArgument);

    printf("number argument %d\n", numberArgument);

    return 0;
}