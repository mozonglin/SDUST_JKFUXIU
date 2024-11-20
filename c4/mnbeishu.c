#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    int k,b,c;
    scanf("%d%d%d",&k,&b,&c);
    int cont=0;
    for (int  i = 1; i <= k; i++)
    {
        
        if ((i%b==0||i%c==0)&&!(i%b==0&&i%c==0))
        {   if(cont==0){
            printf("%d",i);
            cont++;
        }else{
            printf(" %d",i);
        }
            
            
        }
        
    }
     printf("\n");
    
    

}