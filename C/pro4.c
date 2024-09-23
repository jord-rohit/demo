#include <stdio.h>
int main()
{
   // int i, j;
    //int row = 5;
   // int column = 5;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (j <=i)
            {
                printf("*");
            }
           
        }
        printf("\n");
    }
    return 0;
}