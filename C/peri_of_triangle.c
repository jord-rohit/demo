#include<stdio.h>
int main()
{
    int a,b,c,perimeter;
    printf("peri of side 1:\n");
    scanf("%d",&a);
    printf("peri of side 2:\n");
    scanf("%d",&b);
    printf("peri of side 3\n");
    scanf("%d",&c);
    perimeter = a+b+c;
    printf("perimeter of triangle = %d\n",perimeter);
    return 0;
}