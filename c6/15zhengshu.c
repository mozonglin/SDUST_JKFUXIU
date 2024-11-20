#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    int a[15];
    for (int i = 0; i < 15; i++)
    {
        scanf("%d",&a[i]);
        
        
        
    }
    for (int i = 0; i <14 ; i++)
    {
        for (int j = 0; j< 14-i;j++)
        {   
            if (a[j]<a[j+1])
            {
                int temp;
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }  
        }
        
    }
    for (int i = 0; i < 15; i++)
    {
        if (a[i]!=a[i+1])
        {
            printf("%d",a[i+1]);
            break;
        }
        
    }
    
    
    
    

}