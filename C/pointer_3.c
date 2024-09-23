#include <stdio.h>
int main()
{
    int x = 36;
    int y;
    int *num;
    num = &x;
    y = *num; // What if*num=5
    printf("%d\n", x);
    printf("%d\n", num);
    printf("%d\n", *num);
    printf("%d\n", y);
    return 0;
}