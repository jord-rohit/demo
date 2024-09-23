#include <stdio.h>
int main()
{
    int a = 34, b = 100;
    int *p, *q;
    p = &a;
    *q = *p; /// when q=&b then *q=*p; ne
    printf("%d", *q);
    return 0;
}