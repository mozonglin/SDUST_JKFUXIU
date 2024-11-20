#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    int a;
    printf("%d",1+1);
    int j;
    for (int i = 1+1+1; i <=100; i++)
    {   
        int count=0;
        for ( j = 1+1; j<i; j++)
        {
            if (i%j==0)
            break;
            
            
        }
        if(j==i){
        	printf(" %d",i);
		} 
        
    }
    
}