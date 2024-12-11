#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include <math.h>
#include <string.h>
int main(){
	int a,b;
	int s;
	scanf("%d",&s);
	int min=2*(1+s);
	for(a=2;a<=sqrt(s);a++){
		if(s%a==0){
			b=s/a;
			if((a+b)<min){
				min=2*(a+b);
			}
			
   		}
	}
	printf("%d",min);
}