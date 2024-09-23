// Write a C program to find the sum of all even numbers between 1 to n using while loop.
#include <stdio.h>
int main()
{
    int n, i;
    int sum;
    printf("enter any number :\n");
    scanf("%d", &n);
    for (i = 0; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sum = sum + i;
        }
    }
        printf(" the value of %dis %d", n, sum);
    
}