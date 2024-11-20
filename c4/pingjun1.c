#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    int n;
    scanf("%d",&n);
    
    double l=0.0;
    for (int i = 0; i <n; i++)
    {	
    double p;
        scanf("%lf",&p);
        l+=p;
    }
    printf("%.3f",l/n);
    
}