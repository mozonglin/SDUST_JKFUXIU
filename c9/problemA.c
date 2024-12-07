#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include <math.h>
int get_int_sum(int *a, int *b){
	scanf("%d %d",a,b);
	return *a+*b;
	
}
int main()
{
    int n, a, b, i;
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        printf("%d = ", get_int_sum(&a, &b));
        printf("%d + %d\n", a, b);
 
    }
    return 0;
}