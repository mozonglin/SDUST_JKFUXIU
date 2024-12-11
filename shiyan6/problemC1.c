#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include <math.h>
#include <string.h>
long long Monkey(int n,int k){
	if(k==1){
		return 1;
	}else{
		return 2*(Monkey(n,k-1)+1);
	}
}
int main(){
    int n;
    while(scanf("%d",&n)!=EOF){
        printf("%lld\n",Monkey(1,n));
    }
    return 0;
}