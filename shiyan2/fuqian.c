#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    double a,b;
    double sum =0.0;
    while (scanf("%lf %lf",&a,&b)!=EOF)
    {
        sum+=a*b;
    }
    
    printf("%.2f",sum);
    
}