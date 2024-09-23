// write a program to input any number is perfect or not

// to input any number after that count even and odd factor

#include <stdio.h>
int main()
{
    int n;
    int sum = 0;
    printf("Enter any number:");
    scanf("%d", &n);
    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    if (sum == n)
    {
        printf("perfect number");
    }
    else
    {
        printf("not perfect");
    }
}
// wite a program in c to input two numbers after that check twin prime or not.
// write program in c to input two numbers after that number is amicable number.
// to input any number after that find factorial value 
// to input any number after that print table.
