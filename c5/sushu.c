#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    int n;
    int i;
    scanf("%d",&n);
    for (i = 2; i<n; i++)
    {
        if (n%i==0)
        break;
        
    }
    if (i==n)
    {
        printf("yes");
    }else{
        printf("no");
    }
    
    
}