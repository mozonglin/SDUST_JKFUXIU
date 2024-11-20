#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main(){
    char n[101];
    scanf("%s",n);
    int len=strlen(n);
	int k;
	scanf("%d",&k);
	if(k<=len){
		printf("%c",n[k-1]);
	}else{
		printf("error");
	}
    
}