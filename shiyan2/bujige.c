#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    double a;
    double b;
    double n=0.0;
    scanf("%lf",&a);
    for (int i = 0; i < a; i++)
    {
        scanf("%lf",&b);
        if (b<60)
        {
            n+=1.0;
        }
        
        
    }
    printf("%.2f%%",(n/a)*100);
    
    
}