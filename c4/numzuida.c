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
    int count =1;
    while (scanf("%d",&num)!=EOF)
    {
        if (num>max)
        {
            max=num;
            count =0;
        }
        if (num==max)
            count++;
    }
   printf("maximum data is %d, whose occurences is %d.",max,count);
    
}