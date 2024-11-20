#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    int a;
    scanf("%d",&a);
    int b,c,d;

    for (int i = 0; i < a; i++)
    {
        scanf("%d %d %d",&b,&c,&d);
        if (b+c>d&&c+d>b&&b+d>c)
        {
            printf("YES\n");
        }else
        {
            printf("NO\n");
        }
    }
    
}