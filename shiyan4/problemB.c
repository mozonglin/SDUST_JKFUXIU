#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    int a[100][100];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }
    
    int count=1;
    int p;
    
    while (scanf("%d",&p)!=EOF)
    {   
    	int flag=0;
        printf("case %d: ",count);
        for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {	
            if (p==a[i][j])
            {	if(flag==0){
            	printf("%4d %4d",i,j);
            	flag=1;
			}else{
				printf(",%4d %4d",i,j);
			}
                
            }
            
        }
        
    }
    if(flag==0){
    	printf("NOT FOUND");
	}
        count++;
        printf(".\n");
    }
    
    
}