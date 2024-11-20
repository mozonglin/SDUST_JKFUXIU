#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[101][101];
    for (int i = 1; i <=n; i++)
    {
        int m,p;
        scanf("%d %d",&m,&p);
        for (int j = 0; j < m; j++)
        {
            for (int k = 0; k < p; k++)
            {
                scanf("%d",&a[j][k]);
            }
            
        }
      
        printf("case %d:",i);
        for (int j = 0; j < p; j++)
        {	
        	double sum=0;
            
            for (int k = 0; k < m; k++)
            {	
                sum+=a[k][j];
            }
            if(j==0){
            	printf("%g",sum/m);
			}else{
				printf(" %g",sum/m);
			}
            
        }
        printf("\n");
    }
    

}