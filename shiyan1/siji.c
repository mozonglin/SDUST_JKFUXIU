#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    int n;
    scanf("%d",&n);
    if (1<=n && n<=3)
    {
        printf("Spring");
    }else if (4<=n && n<=6)
    {
        printf("Summer");
    }else if (7<=n && n<=9)
    {
        printf("Autumn");
    }else
    {
        printf("Winter");
    }
    
    
    
    
}