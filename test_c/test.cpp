#include <stdio.h>

typedef char T[10];

int main(void)
{
    T* a;
    char (*p)[10];

    p = a;   // 可以通过编译

    return 0;
}
