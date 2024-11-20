#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    int n;
    
    scanf("%d",&n);
    
    if(abs(n)>=0&&abs(n)<10){

        printf("%d",n);
    }
    else {
    	if(abs(n)%100<10)
    	{
    		printf("0%d",abs(n)%100);
		}
		else{
			printf("%d",abs(n)%100);
		}
        
    }
    
    
}