#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
int get_nums(int *n){
	*n=0;
	int a;
	while(scanf("%d",&a)==1){
		(*n)++;
	}
	
	return *n;
}
int main()
{
    int n;
    get_nums(&n);
    printf("%d\n", n);
}

