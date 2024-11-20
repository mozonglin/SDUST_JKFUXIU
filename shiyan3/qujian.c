#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    int a[100];
    int p,q;
    int cont=0;
    
    for (int i = 0; i < 15; i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d %d",&p,&q);
    for (int i = 0; i < 15; i++)
    {
        if ((a[i]>=p&&a[i]<=q)||(a[i]<=p&&a[i]>=q))
        {
            cont++;
        }
        
    }
    printf("%d",cont);
    

    
    
    
}