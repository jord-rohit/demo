// to input any number after that count even and odd factor

#include <stdio.h>
int main()
{
    int n;
    int ecount = 0;
    int ocount = 0;
    printf("Enter any number:");
    scanf("%d", &n);
    printf("\nAll factors of n is\n");
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            if (i % 2 == 0)
            {
                ecount += 1;
            }else{
                ocount+=1;
            }
        }
    }
    printf("Number of even factors are :%d\n",ecount);
    printf("Number of Odd factors are :%d\n",ocount);
}