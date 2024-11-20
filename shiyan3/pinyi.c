#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    int n;
    int a[1000];
    scanf("%d",&n);
    
    for (int i = 0; i <n; i++)
    {
        scanf("%d",&a[i]);
    }
    int p=a[0];
    for (int i = 0; i < n-1; i++)
    {
        a[i]=a[i+1];
       
    }
    a[n-1]=p;
    printf("%d",a[0]);
    for (int i = 1; i < n; i++)
    {
        printf(" %d",a[i]);
    }
    
    
    
}
