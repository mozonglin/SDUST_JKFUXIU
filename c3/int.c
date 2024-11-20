#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include <math.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    if (a+b>0)
    {
        printf("sum is %d",a+b);
    }
    else{
        printf("overflow");
    }
    
}