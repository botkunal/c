#include<stdio.h>

int fun(int x ,int y)
{
    if (y==0)
    return 0;

    retun(x+ fun(x, y-1));
}