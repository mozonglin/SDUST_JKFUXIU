#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include <math.h>
#include <string.h>
int main(){
	char a[100];
	while(gets(a)!=NULL){
		int len = strlen(a);
		if(len%2==0){
			int count =0;
			for(int i=0,j=len-1; i<=len/2-1,j>=len/2;i++,j--){
				if(a[i]!=a[j]){
					count=1;
				}
			}
			if(count==0){
				printf("Yes.\n");
				
			}
			else{
				printf("No.\n");
			}
		}
		if(len%2!=0){
			int count =0;
			for(int i=0,j=len-1; i<=(len+1)/2-2,j>=(len+1)/2;i++,j--){
				if(a[i]!=a[j]){
					count=1;
				}
			}
			if(count==0){
				printf("Yes.\n");
				
			}
			else{
				printf("No.\n");
			}
		}
	}
	
	
}