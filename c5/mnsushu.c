#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    int m,n;
    int j=0;
    
    scanf("%d %d",&m,&n);
    printf("=====\n");
    for (int i = n; i >=m; i--)
    {
        for (j = 2; j < i; j++)
        {
            if (i%j==0)
            break;
            
        }
        if (j==i)
        {
            printf("%d\n",i);
        }
        
        
    }
    
    printf("=====");
}