#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include <math.h>
void getData(int data[],int i,int n,int *p){
	if(i<0||i>=n){
		*p=-1;
	}
	else{
	*p=data[i];
}
}
int main()
{
    int data[100],N,order,i,goal;
    scanf("%d",&N);
    for (i=0;i<N;i++)
        scanf("%d",&data[i]);
    scanf("%d",&order);
    getData(data,order,N,&goal);
    if (goal>-1)
        printf("data[%d] = %d.\n",order,goal);
    else
        puts("The index is overflow.");
    return 0;
}
