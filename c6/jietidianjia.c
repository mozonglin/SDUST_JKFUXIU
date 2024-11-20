#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    char n[31];
    double uasge;
    while (scanf("%s %lf",n,&uasge)!=EOF)
    {   
        double fee;
        if (uasge<=2880)
        {
            fee=uasge*0.48;
        }else if (uasge>2880&&uasge<=4800)
        {
            fee=2880*0.48+(uasge-2880)*0.53;
        }else
        {
             fee = 2880 * 0.48 + 1920 * 0.53 + (uasge - 4800) * 0.78;
        }
        printf("%s:%.2f\n",n,fee);
        
        
        
    }
    
}