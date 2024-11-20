#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    int a[1000];
    int p[1000];
    int sum=0;
    int x;
    scanf("%d",&sum);
    if(sum>0&&sum<=1000){
    	 
    for (int i = 0; i<sum; i++)
    {
        int summ=0;
        scanf("%d",&summ);
        
        
        for (int j = 0; j < summ; j++)
        {   
            
            scanf("%d",&a[j]);
       }
       			x=0;
				p[0]=a[0];
            for (int j = 1; j < summ; j++){
			
            	
			
			
			
				if(a[j]!=a[j-1]){
						x++;
						p[x]=a[j];
				        
				}
			
			}
		
	 			printf("%d",p[0]);
        for(int j=1; j<=x;j++){
        	printf(" %d",p[j]);
		}
		printf("\n");
        }
    }
       
        return 0;
        
}
	
   
    
    

