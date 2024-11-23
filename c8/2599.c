#include <stdio.h>


int countWays(int m) {
    if (m == 1) {
        return 1; 
    }
    if (m == 2) {
        return 2;
    }
    return countWays(m - 1) + countWays(m - 2);
}
int input(){
	int  m;
	if(scanf("%d",&m)!=EOF){
		printf("%d\n",countWays(m));
		input();
	}
	
}
int main() {
    int n; 
    n=input();
    return 0;
}
