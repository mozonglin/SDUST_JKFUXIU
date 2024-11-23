#include <stdio.h>
int fn1(){
	static int s=0;
	s=s+1;
	return s;
	
}
int main(){
	
	for(int i=0;i<10;i++){
		printf("n的值为%d\n",fn1());
	}
}