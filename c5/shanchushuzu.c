#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    int n;
    int a[100];
    scanf("%d",&n);
    int p;
    for (int i = 0; i <n; i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&p);
    for (int i = 0; i < n; i++)
    {
        if (a[i]==p)
        continue;
        printf("%d\n",a[i]);
        
    }
    
   
    
}