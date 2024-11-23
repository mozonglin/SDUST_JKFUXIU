#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
int nn(n){
    if(n==0){
        return 1;

    }else{
        return n*nn(n-1);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d\n",nn(n));
    return 0;
}