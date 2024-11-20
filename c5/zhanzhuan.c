#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    int m,n;
    int t;
    while (scanf("%d %d",&m,&n)!=EOF)
    {
        int x=m;
        int y=n;
        
        
        if (n==0)
        {
            printf("%d %d\n",x,y);
        }
        else{
            t=m%n;
            while (t!=0)
        {   
            m=n;
            n=t;
            t=m%n;

        }
        printf("%d %d\n",n,x*y/n);
        }
        
        
    }
    
    


}