#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
int main(){
	int p;
	int x;
	scanf("%d",&p);
	for(int i=0;i<p;i++){
		scanf("%d",&x);
		printf("%d\n",fb(x));
	}
}
int fb(int n){
	if(n==1){
		return 1;
	}else if(n==0){
		return 0;
	}
	return fb(n-1)+fb(n-2);
}