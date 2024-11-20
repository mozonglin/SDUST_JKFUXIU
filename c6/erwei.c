#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    int n;
    int sum;
    int a[1000];
    scanf("%d",&n);
    int M,N;
    for (int i = 0; i < n; i++)
    {   
        scanf("%d",&sum);
        for (int j = 0; j < sum; j++)
        {
            scanf("%d",&a[j]);
        }
        scanf("%d %d",&M,&N);
        int count=0;
        for(int j=0;j<sum;j++){
        	if(j%N==0){
        		printf("%2d",a[j]);
        		
			}else
			{
				printf(" %2d",a[j]);
			}
        	
        	if((j+1)%N==0){
        		printf("\n");
			}
		}
        
       
            
        }
        
        
    }
    
