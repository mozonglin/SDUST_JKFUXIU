#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    double p,w,m;
    
    scanf("%lf %lf %lf",&p,&w,&m);
    if (m<=500)
    {
        printf("%.2f",p*w*m);
    }else if (m>=500 && m<=1000)
    {
        printf("%.2f",500*p*w+(m-500)*p*w*0.95);
    }else if (m>=1000&&m<=2000)
    {
         printf("%.2f",500*p*w+500*p*w*0.95+(m-1000)*p*w*0.9);
    }else
    {
        printf("%.2f",500*p*w+500*p*w*0.95+1000*p*w*0.9+(m-2000)*p*w*0.88);
    }
    
}
    
    
    switch (grade)
    {
    case 0:
        printf("%.2f",p*w*m);
        break;
    case 1:
        printf("%.2f",500*p*w+(m-500)*p*w*0.95);
        break;
    case 2:
        printf("%.2f",500*p*w+500*p*w*0.95+(m-1000)*p*w*0.9);
        break;
    case 3:
        printf("%.2f",500*p*w+500*p*w*0.95+(m-1000)*p*w*0.9);
        break;
    
    default:
     printf("%.2f",500*p*w+500*p*w*0.95+500*p*w*0.9+(m-1500)*p*w*0.88);
        break;
    }
}