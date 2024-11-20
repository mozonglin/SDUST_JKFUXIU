#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[100];
    a[0]=1;
    a[1]=1;
    int p;
    for (int i = 2; i <=45; i++)
    {
        a[i]=a[i-2]+a[i-1];
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&p);
        printf("%d\n",a[p]);
    }
    
    
    
    
}