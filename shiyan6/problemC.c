#include<stdio.h>
long long Monkey(int n,int k){
	long long p=1;
	for(int i=1;i<=k;i++){
		if(i==1){
			p=1;
		}else{
			p=(p+1)*2;
		}
		
	}
	if(k==1){
		return 1;
	}else{
	 return p;	
	}
	
}
int main(){
    int n;
    while(scanf("%d",&n)!=EOF){
        printf("%lld\n",Monkey(1,n));
    }
    return 0;
}