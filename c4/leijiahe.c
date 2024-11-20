#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    int a,b,c;
    int sum=0;
    scanf("%d",&a);
    for (int i = 1; i <= a; i++)
    {
        scanf("%d %d",&b,&c);
        for (int j = b; j <=c; j++)
        {
            sum+=j;
        }
        
        printf("case %d:sum=%d.\n",i,sum);
        sum=0;
    }
    
}