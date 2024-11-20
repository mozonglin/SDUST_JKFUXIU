#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n>0&&n<=1000){
    double a[2000];
    double sum=0.0;
    for (int i = 0; i < n; i++)
    {
        scanf("%lf",&a[i]);
        sum+=a[i];
        
    }
    printf("%.2f",a[0]-sum*1.0/n*1.0);
    for (int i = 1; i < n; i++)
    {
        printf(" %.2f",a[i]-sum*1.0/n*1.0);
    }
	}
    
    
}