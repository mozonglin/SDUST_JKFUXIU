#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    int n;
    int a[10000];
    scanf("%d",&n);
    int p;
    int i;
    for (int i = 0; i <n; i++)
    {
        scanf("%d",&a[i]);
    }
    while (scanf("%d",&p)!=EOF)
    {   
    
        for (i = 0; i < n; i++)
        {
            if (p==a[i])
            {
                printf("%d\n",i+1);
                break;
            }
            
        }
        if (i==n)
        {
            printf("NOT FOUND\n");
        }
        
        
    }
    
}
