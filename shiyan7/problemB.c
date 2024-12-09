#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include <math.h>

int main()
{
    char str[10];
    struct date dt;
    while(gets(str) != NULL)
    {
        dt = to_date(str);
        printf("%d %d %d\n", dt.y, dt.m, dt.d);
    }
    return 0;
}