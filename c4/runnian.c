#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int num=0;
    for (int i = a+1; i <=b; i++)
    {
        if ((i%4==0&&i%100!=0)||i%400==0)
        {
            num+=1;
            if(num==1)
            {
                printf("%d",i);
            }else
            {
                printf(" %d",i);
            }  
        }
    }
}