
#include <stdio.h>

int main()
{

    int num = 999;

    int *ptr;

    ptr = &num;

    printf("%u=>%d\n", ptr, *ptr);

    int **ptr2;

    ptr2 = &ptr;

    printf("%u=>%d\n", ptr2, **ptr2);

    **ptr2 = 786;

    printf("changed num %d", num);

    return 0;
}