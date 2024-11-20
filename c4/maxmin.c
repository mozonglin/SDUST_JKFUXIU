#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    int max=0;
    int min=0;
    int num=0;
    scanf("%d",&num);
    min=num;
    max=num;
    while (scanf("%d",&num)!=EOF)
    {
        if (num>max)
        {
            max=num;
        }
        if (num<min)
        {
            min=num;
        }
    }
   printf("max = %d, min = %d",max,min);
    
}