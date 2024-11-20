#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    int n;
    int p;
    scanf("%d",&n);
    int a[100];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    
    scanf("-%d",&p);
    printf("%d",a[n-1-p]);
    
    

}