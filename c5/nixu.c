#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    int n;
    int a[100];
    scanf("%d",&n);
    for (int i = 0; i <n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("%d",a[n-1]);
    for (int i = n-2; i >=0; i--)
    {
        printf(" %d",a[i]);
    }
    
    
}