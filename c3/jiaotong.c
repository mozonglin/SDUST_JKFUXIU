#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    double a;
    scanf("%lf",&a);
    double d=a*1000;
    double b= 60+d/3;
    double c=a*1000/1.2;
    if (b>c)
    {
        printf("Walk");
    }else if (b<c)
    {
        printf("Bike");
    }else{
        printf("All");
    }
    
    
    
}