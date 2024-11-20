#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main(){
    int n;
    scanf("%d",&n);
    char a[1000];
    
    getchar();
    
       	for(int i=1;i<=n;i++){
       		gets(a);
       		int len=strlen(a);
        	printf("case %d:length=%d.\n",i,len);
		   }
        
        
    
    
}