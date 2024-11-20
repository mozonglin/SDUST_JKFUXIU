#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    int n;
    scanf("%d",&n);
    double a[1000];
    double sum=0.0;
    int min=0;
    int max=0;
    for (int i = 0; i < n; i++)
    {
        scanf("%lf",&a[i]);
        sum+=a[i];
    }
    for (int i = 0; i < n; i++)
    {
       
        if (a[i]>(sum/n))
        {
            max++;
        }else if (a[i]<(sum/n))
        {
            min++;
        }
        
        
    }
    printf("%d %d",min,max);
    
}