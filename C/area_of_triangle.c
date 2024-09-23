#include <stdio.h>
int main()
{
    int b, h, area;
    printf("enter base of traiangle:\n");
    scanf("%d", &b);
    printf("enter height of triangle:\n");
    scanf("%d", &h);
    area = 0.5 * b * h;
    printf("area of triangle=%d \n", area);
    return 0;
}