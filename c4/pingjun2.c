#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    double a;
    double l=0;
    int  i=0;
    while (scanf("%lf",&a)!= EOF)
    {   
        l += a;
        i++;
    }
    printf("%.3f",l/i);
    
}