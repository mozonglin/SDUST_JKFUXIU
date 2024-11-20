#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    int sum;
    int a=0;
    
    while (scanf("%d",&sum)!=EOF)
    {
        if (sum==0)
        {
            break;
        }else
        {
            int p=0;
             for (int i = 0; i < sum; i++)
    {
            scanf("%d",&a);
         p+=a;
        
        
    }
              printf("%d\n",p);
        }
        
        
    
    }
    
    
    
}