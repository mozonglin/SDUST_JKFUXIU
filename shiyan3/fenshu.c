#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    int n;
    int a[200];
    int p;
     for (int i = 0; i <101; i++)
    {
        a[i]=0;
    }
    
    
    
    while (scanf("%d",&p)!=EOF)
    {
        if (p>=0&&p<=100)
        {
            a[p]++;
        }
        
    }
    int maxcont;
    int max=0;
    for(int i=0;i<=100;i++)
    {
    	if(a[i]>max){
    		max=a[i];
    		maxcont=a[i];
		}
	}
	
	for(int i=0;i<=100;i++){
		
		if(a[i]==max){
			printf("%d\n",i);
			
		}
	}
	
   
    
    
}
