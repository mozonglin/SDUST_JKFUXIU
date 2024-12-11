#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include <math.h>
#include <string.h>
static int count =0;
static int max=0;
int countt(){
    int n;
    if(scanf("%d",&n)!=EOF){
    	if (max<n)
    {
        max=n;
    }
    	count++;
        
        return countt();
        
    }else{
        return count;
        
    }
}
int main(){
    int n;
    int total=countt();
    printf("%d %d",total,max);
}