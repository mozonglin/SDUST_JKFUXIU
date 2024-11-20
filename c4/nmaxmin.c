#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    int n,a;
    scanf("%d",&n);
    scanf("%d",&a);
    int max=a,min=a;
    for (int  i = 2; i <=n; i++)
    {
        scanf("%d",&a);
        if (a>max)
        {
            max=a;
        }
        if (a<min)
        {
            min=a;
        }
        
        
    }
    printf("The maximum number is %d.\n",max);
    printf("The minimum number is %d.",min);
    
}