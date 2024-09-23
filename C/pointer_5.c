// Pointer to Pointer (Double Pointer)
#include <stdio.h>
int main()
{
    int a = 100;
    int *x = &a;
    int **y = &x; /// what if int **y=&a or what **y=x;
    printf("%d\n", **y);
    printf("%d\n", *y);
    return 0;
}