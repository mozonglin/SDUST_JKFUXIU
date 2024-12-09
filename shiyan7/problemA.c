#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include <math.h>
int main(){
	int n;
	int b;
	char a[1000];
	char c[1000];
	scanf("%d",&n);

	
    for(int i=1;i<=n;i++){
    	int p=0;
		scanf("%d",&b);
		getchar();
    	for(int j=1;j<=b;j++){
    		fgets(a, 1000, stdin);
    		c[p]=a[0];
    		p++;
		}
		c[p]='\0';
		puts(c);
	}
	return 0;
}