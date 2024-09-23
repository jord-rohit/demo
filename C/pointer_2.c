
#include <stdio.h>
int main()
{
    int a = 10, b = 55;
    int *x, *z;
    x = &b;
    z = x; // what if z=&x;
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", x);
    printf("%d\n", z);
    printf("%d\n", *x);
    printf("%d\n", *z);
    return 0;
}