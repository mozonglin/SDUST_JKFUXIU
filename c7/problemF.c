#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include <math.h>

double getAverage(){
    int n,i,num;
    double sum=0.0,avg;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&num);
        sum+=num;
        
 }
 avg=sum/n;   
 return avg;
}
int main()
{
    int m, i;
    scanf("%d",&m);
    for(i=0;i<m;i++){
        printf("%.2lf\n",getAverage());
    }
    return 0;
}
