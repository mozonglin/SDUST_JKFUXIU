#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    int n;
    int a[10000];
    scanf("%d",&n);
    int p;
    for (int i = 0; i <n; i++)
    {
        scanf("%d",&a[i]);
    }
    while (scanf("%d",&p)!=EOF)
    {   
        if (p<=n&&p>=1)
        {
            printf("%d\n",a[p-1]);
    }
    else{
        printf("OUT OF RANGE\n");
    }     
}
}