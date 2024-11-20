#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    double n;
    int a[100];
    int avg;
    int sum=0;
    scanf("%lf",&n);
    if (n>0)
    {
        for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];

    }
   printf("%d\n%g",sum,sum*1.0/((n)*1.0));

    }else{
       printf("There is no numbers.");
    }
    
    
}