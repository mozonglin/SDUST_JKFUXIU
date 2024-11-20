#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    int a,b,c=0;
    int x;
    scanf("%d",&x);
  for (int  j = 0; j < x; j++)
  {
    scanf("%d",&a);
     for (int i = 0; i < a; i++)
    {
        scanf("%d",&b);
        c = b + c;
    }
    printf("%d\n",c);
    c=0;
  }
  
   
    
  
  
    
}
