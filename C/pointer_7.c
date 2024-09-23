// Pointer Arithmetic question;
#include <stdio.h>
int main()
{
    int a = 10;
    int *p, *q;
    p = &a;
    q = &a;
    // int c =p+q;
    printf("%d\n", p);
    printf("%d\n", &p);
    printf("%d\n", (p + 1));  // it will print address or value or error
    printf("%d\n", *(p + 1)); // here is garbage value or any address
    printf("%d\n", *p);
    printf("%d\n", *p + 1);
    return 0;
}