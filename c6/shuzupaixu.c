#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[100000];
    for (int i = 0; i < n; i++)
    {
        int n1;
        scanf("%d",&n1);
        for (int j = 0; j < n1; j++)
        {
            scanf("%d",&a[j]);
        }
        for (int k = 0; k < n1-1; k++)
        {
            for (int j = 0; j <n1-1-k ; j++)
            {
                int temp=0;
                if (a[j]>a[j+1])
                {
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
                
            }
            
        }
        printf("%d",a[0]);
        for (int j = 1; j < n1; j++)
        {
            printf(" %d",a[j]);
        }
        printf("\n");
        for (int k = 0; k < n1-1; k++)
        {
            for (int j = 0; j <n1-1-k ; j++)
            {
                int temp=0;
                if (a[j]<a[j+1])
                {
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
                
            }
            
        }
        printf("%d",a[0]);
        for (int j = 1; j < n1; j++)
        {
            printf(" %d",a[j]);
        }
        
        
        
        
    }
    
}