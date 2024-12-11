#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include <math.h>
#include <string.h>
int main(){
	char a[10000];
	int p=1;
	while(gets(a)!=NULL){
		int count=0;
	for(int i=0;i<strlen(a);i++){
		
		if(a[i]=='6'){
			count++;
		}	
	}
	printf("case %d : %d\n",p,count);
		
	
	p++;	
	}
}