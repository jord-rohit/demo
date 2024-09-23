#include <stdio.h>
int main()
{
    int a, b, c, d;
    printf("Enter first no.:");
    scanf("%d", &a);
    printf("Enter second no.:");
    scanf("%d", &b);
    printf("Enter third no.:");
    scanf("%d", &c);
    printf("Enter fourth no.:");
    scanf("%d", &d);

    if (a > b)
    {
        if (a > c)
        {
            if (a > d)
            {
                printf("a is greater");
            }
            else
            {
                printf("d is greater");
            }
        }
        else
        {
            if (c > d)
            {
                printf("c is greater");
            }
            else
            {
                printf("d is greater");
            }
        }
    }
    else
    {
        if (b > c)
        {
            if (b > d)
            {
                printf("b is greater");
            }
            else
            {
                printf("d is greater");
            }
        }
        else
        {
            if (c > d)
            {
                printf("c is greater");
            }
            else
            {
                printf("d is greater");
            }
        }
    }
}