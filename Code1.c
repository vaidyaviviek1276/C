#include<stdio.h>
#define x 20
int sum(int y);
int main()
{
    int y = 55;
    printf("Sum:%d", sum(y));
    return 0;}
    int sum(int y)
    {return y + x;}
