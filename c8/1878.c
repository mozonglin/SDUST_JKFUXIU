#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
int max(int a,int b,int c){
	if(a>b&&a>c){
		return a;
	}else if(b>a&&b>c){
		return b;
	}else if(c>a&&c>b){
		return c;
	}
	
}
int min(int *a,int* b,int *c){
	if(*a<*b&&*a<*c){
		return *a;
	}else if(*b<*a&&*b<*c){
		return *b;
	}else if(*c<*a&&*c<*b){
		return *c;
	}
	
}
int swap(int *c,int *d){
	int temp=*c;
	*c=*d;
	*d=temp;
}





int main() {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
 
    printf("The max value is %d\n\n", max(a, b, c));
 
    printf("The min value is %d\n\n", min(&a, &b, &c));
 
    printf("The original order is %d %d %d\n\n", a, b, c);
 
    if (a > b)
        swap(&a, &b);
    if (a > c)
        swap(&a, &c);
    if (b > c)
        swap(&b, &c);
 
    printf("The new order is %d %d %d", a, b, c);
    return 0;
}
